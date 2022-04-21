/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jayi <jayi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 16:14:35 by jayi              #+#    #+#             */
/*   Updated: 2022/04/21 18:17:57 by jayi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void) {
    this->name = "Unknown";
    this->size = 0;
    for (int idx = 0; idx < 4; idx++)
        this->materias[idx] = NULL;

    // std::cout << "Character default constructor!!" << std::endl;
}

Character::Character(std::string name) {
    this->name = name;
    this->size = 0;
    for (int idx = 0; idx < 4; idx++)
        this->materias[idx] = NULL;

    // std::cout << "Character name[";
    // std::cout << this->name;
    // std::cout << "] constructor!!" << std::endl;
}

Character::~Character() {
    for (int idx = 0; idx < size; idx++)
        delete this->materias[idx];
    // std::cout << "Character Destructor!!" << std::endl;
}

Character::Character(const Character &ref) {
    // std::cout << "Character copy constructor!!" << std::endl;
    *this = ref;
}

Character &Character::operator=(const Character &ref) {
    // std::cout << "Character copy assignment constructor!!" << std::endl;
    if (this != &ref) {
        this->name = ref.name;

        for (int idx = 0; idx < this->size; idx++) {
            delete this->materias[idx];
            if (ref.materias[idx]->getType() == "ice")
                this->materias[idx] = new Ice();
            else if (ref.materias[idx]->getType() == "cure")
                this->materias[idx] = new Cure();
            else
                this->materias[idx] = NULL;
        }
    }
    return *this;
}

std::string const &Character::getName(void) const { return this->name; }

void Character::equip(AMateria *m) {
    if (size >= 4) {
        return;
    }
    if (m == NULL) {
        return;
    }
    materias[size] = m;
    size++;
}

void Character::unequip(int idx) {
    if (size <= 0) {
        return;
    }
    for (int cur = idx; cur < 3; cur++) {
        materias[cur] = materias[cur + 1];
    }
    size--;
}

void Character::use(int idx, ICharacter &target) {
    if (!(0 <= idx && idx < size)) {
        return;
    }
    materias[idx]->use(target);
}