/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jayi <jayi@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 17:12:30 by jayi              #+#    #+#             */
/*   Updated: 2022/04/17 20:33:05 by jayi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void) {
    this->size = 0;
    for (int idx = 0; idx < 4; idx++)
        this->materias[idx] = NULL;
    // std::cout << "MateriaSource default constructor!!" << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource &ref) {
    // std::cout << "MateriaSource copy constructor!!" << std::endl;
    *this = ref;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &ref) {
    // std::cout << "MateriaSource copy assignment constructor!!" << std::endl;
    if (this != &ref) {
        for (int idx = 0; idx < this->size; idx++) {
            if (ref.materias[idx]->getType() == "ice")
                this->materias[idx] = new Ice();
            else if (ref.materias[idx]->getType() == "cure")
                this->materias[idx] = new Cure();
            else
                this->materias[idx] = NULL;
            delete this->materias[idx];
        }
    }
    return *this;
}

MateriaSource::~MateriaSource() {
    for (int idx = 0; idx < size; idx++)
        delete this->materias[idx];
    // std::cout << "MateriaSource Destructor!!" << std::endl;
}

void MateriaSource::learnMateria(AMateria *materia) {
    if (this->size >= 4)
        return;

    if (materia->getType() == "ice")
        this->materias[size] = new Ice();
    else if (materia->getType() == "cure")
        this->materias[size] = new Cure();
    size++;
}

AMateria *MateriaSource::createMateria(std::string const &type) {
    if (type == "ice")
        return new Ice();
    else if (type == "cure")
        return new Cure();
    else
        return NULL;
}
