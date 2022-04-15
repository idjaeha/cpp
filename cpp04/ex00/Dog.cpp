/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jayi <jayi@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 16:12:07 by jayi              #+#    #+#             */
/*   Updated: 2022/04/15 17:24:01 by jayi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) {
    this->type = "Dog";
    std::cout << "Create Dog !!!" << std::endl;
}

Dog::~Dog() { std::cout << "Delete Dog !!!" << std::endl; }

Dog &Dog::operator=(const Dog &ref) {
    std::cout << type;
    std::cout << " copy assignment operator." << std::endl;
    if (this != &ref) {
        this->type = ref.type;
    }
    return *this;
}

Dog::Dog(const Dog &ref) {
    std::cout << type;
    std::cout << " copy constructor." << std::endl;
    *this = ref;
}

void Dog::makeSound(void) const {
    std::cout << this->type;
    std::cout << " : dog sound~~!" << std::endl;
}
