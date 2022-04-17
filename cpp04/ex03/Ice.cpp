/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jayi <jayi@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 16:06:34 by jayi              #+#    #+#             */
/*   Updated: 2022/04/17 17:48:07 by jayi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void) {
    this->type = "ice";
    // std::cout << "Ice default constructor!!" << std::endl;
}

Ice::Ice(const Ice &ref) {
    // std::cout << "Ice copy constructor!!" << std::endl;
    *this = ref;
}

Ice::~Ice() {
    // std::cout << "Ice Destructor!!" << std::endl;
}

Ice &Ice::operator=(const Ice &ref) {
    // std::cout << "Ice copy assignment constructor!!" << std::endl;
    if (this != &ref) {
    }
    return *this;
}

void Ice::use(ICharacter &target) {
    std::cout << " * ";
    std::cout << "shoots an ice bolt at ";
    std::cout << target.getName();
    std::cout << " * ";
    std::cout << std::endl;
}

AMateria *Ice::clone(void) const { return new Ice(*this); }
