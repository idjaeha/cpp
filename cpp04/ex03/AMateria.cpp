/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jayi <jayi@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 15:44:25 by jayi              #+#    #+#             */
/*   Updated: 2022/04/17 17:47:22 by jayi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

std::string const &AMateria::getType(void) const { return this->type; }

AMateria::AMateria(void) {
    this->type = "Unknown";
    // std::cout << "AMateria default constructor!!" << std::endl;
}

AMateria::AMateria(std::string const &type) {
    this->type = type;
    // std::cout << "AMateria type[";
    // std::cout << this->type;
    // std::cout << "] constructor!!" << std::endl;
}

AMateria::AMateria(const AMateria &ref) {
    // std::cout << "AMateria copy constructor!!" << std::endl;
    *this = ref;
}

AMateria::~AMateria() {
    // std::cout << "AMateria Destructor!!" << std::endl;
}

AMateria &AMateria::operator=(const AMateria &ref) {
    // std::cout << "AMateria copy assignment constructor!!" << std::endl;
    if (this != &ref) {
        this->type = ref.type;
    }
    return *this;
}

void AMateria::use(ICharacter &target) { (void)target; }