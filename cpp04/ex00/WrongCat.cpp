/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jayi <jayi@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 17:26:14 by jayi              #+#    #+#             */
/*   Updated: 2022/04/15 17:26:14 by jayi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void) {
    this->type = "WrongCat";
    std::cout << "Create WrongCat !!!" << std::endl;
}

WrongCat::~WrongCat() { std::cout << "Delete WrongCat !!!" << std::endl; }

WrongCat &WrongCat::operator=(const WrongCat &ref) {
    std::cout << type;
    std::cout << " copy assignment operator." << std::endl;
    if (this != &ref) {
        this->type = ref.type;
    }
    return *this;
}

WrongCat::WrongCat(const WrongCat &ref) {
    std::cout << type;
    std::cout << " copy constructor." << std::endl;
    *this = ref;
}

void WrongCat::makeSound(void) const {
    std::cout << this->type;
    std::cout << " : cat sound~~!" << std::endl;
}
