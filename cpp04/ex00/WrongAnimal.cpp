/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jayi <jayi@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 17:25:58 by jayi              #+#    #+#             */
/*   Updated: 2022/04/15 17:25:59 by jayi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) {
    this->type = "WrongAnimal";
    std::cout << "Create WrongAnimal !!!" << std::endl;
}

WrongAnimal::~WrongAnimal() {
    std::cout << "Delete WrongAnimal !!!" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &ref) {
    std::cout << type;
    std::cout << " copy assignment operator." << std::endl;
    if (this != &ref) {
        this->type = ref.type;
    }
    return *this;
}

WrongAnimal::WrongAnimal(const WrongAnimal &ref) {
    std::cout << type;
    std::cout << " copy constructor." << std::endl;
    *this = ref;
}

void WrongAnimal::makeSound(void) const {
    std::cout << this->type;
    std::cout << " : animal sound~~!" << std::endl;
}

std::string WrongAnimal::getType(void) const { return this->type; }