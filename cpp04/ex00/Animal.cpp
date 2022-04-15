/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jayi <jayi@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 16:12:07 by jayi              #+#    #+#             */
/*   Updated: 2022/04/15 16:42:10 by jayi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) {
    std::cout << "Create ";
    std::cout << this->type;
    std::cout << "!!!" << std::endl;
}

Animal::~Animal() {
    std::cout << "Delete ";
    std::cout << this->type;
    std::cout << "!!!" << std::endl;
}

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

void Animal::makeSound(void) {
    std::cout << this->type;
    std::cout << " : souuuuuuunnnddddd~~!" << std::endl;
}