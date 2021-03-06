/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jayi <jayi@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 16:12:07 by jayi              #+#    #+#             */
/*   Updated: 2022/04/15 17:23:53 by jayi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) {
    this->type = "Cat";
    std::cout << "Create Cat !!!" << std::endl;
}

Cat::~Cat() { std::cout << "Delete Cat !!!" << std::endl; }

Cat &Cat::operator=(const Cat &ref) {
    std::cout << type;
    std::cout << " copy assignment operator." << std::endl;
    if (this != &ref) {
        this->type = ref.type;
    }
    return *this;
}

Cat::Cat(const Cat &ref) {
    std::cout << type;
    std::cout << " copy constructor." << std::endl;
    *this = ref;
}

void Cat::makeSound(void) const {
    std::cout << this->type;
    std::cout << " : cat sound~~!" << std::endl;
}
