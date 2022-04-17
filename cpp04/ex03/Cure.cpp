/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jayi <jayi@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 15:35:42 by jayi              #+#    #+#             */
/*   Updated: 2022/04/17 17:47:56 by jayi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void) {
    this->type = "ice";
    // std::cout << "Cure default constructor!!" << std::endl;
}

Cure::Cure(const Cure &ref) {
    // std::cout << "Cure copy constructor!!" << std::endl;
    *this = ref;
}

Cure::~Cure() {
    // std::cout << "Cure Destructor!!" << std::endl;
}

Cure &Cure::operator=(const Cure &ref) {
    // std::cout << "Cure copy assignment constructor!!" << std::endl;
    if (this != &ref) {
    }
    return *this;
}

void Cure::use(ICharacter &target) {
    std::cout << " * ";
    std::cout << "heals ";
    std::cout << target.getName();
    std::cout << "’s wounds";
    std::cout << " * ";
    std::cout << std::endl;
}

AMateria *Cure::clone(void) const { return new Cure(*this); }