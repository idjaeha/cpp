/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jayi <jayi@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 16:12:07 by jayi              #+#    #+#             */
/*   Updated: 2022/04/15 17:24:36 by jayi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) {
    this->type = "Animal";
    std::cout << "Create Animal !!!" << std::endl;
}

Animal::~Animal() { std::cout << "Delete Animal !!!" << std::endl; }

Animal &Animal::operator=(const Animal &ref) {
    std::cout << type;
    std::cout << " copy assignment operator." << std::endl;
    if (this != &ref) {
        this->type = ref.type;
    }
    return *this;
}

Animal::Animal(const Animal &ref) {
    std::cout << type;
    std::cout << " copy constructor." << std::endl;
    *this = ref;
}

void Animal::makeSound(void) const {
    std::cout << this->type;
    std::cout << " : animal sound~~!" << std::endl;
}

std::string Animal::getType(void) const { return this->type; }