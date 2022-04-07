/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehayi <jaehayi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 11:39:31 by jaehayi           #+#    #+#             */
/*   Updated: 2022/04/07 12:52:30 by jaehayi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) : ClapTrap("Unknown") {
    std::cout << "DiamondTrap ";
    std::cout << this->name;
    std::cout << " created.";
    std::cout << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : name(name) {
    std::cout << "DiamondTrap ";
    std::cout << this->name;
    std::cout << " created.";
    std::cout << std::endl;
    ClapTrap::name = name + "_clap_name";
}

DiamondTrap::DiamondTrap(int hitPoints, int energyPoints, int attackDamage,
                         std::string name)
    : ClapTrap(hitPoints, energyPoints, attackDamage, name) {
    std::cout << "DiamondTrap ";
    std::cout << this->name;
    std::cout << " created.";
    std::cout << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &ref)
    : ClapTrap(ref), ScavTrap(ref), FragTrap(ref) {
    std::cout << "DiamondTrap copy constructor." << std::endl;
    *this = ref;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &ref) {
    std::cout << "DiamondTrap copy assignment operator." << std::endl;
    if (this != &ref) {
        this->hitPoints = ref.hitPoints;
        this->energyPoints = ref.energyPoints;
        this->attackDamage = ref.attackDamage;
        this->name = ref.name;
    }
    return *this;
}

DiamondTrap::~DiamondTrap() {
    std::cout << "DiamondTrap ";
    std::cout << this->name;
    std::cout << " deleted.";
    std::cout << std::endl;
}

void DiamondTrap::whoAmI(void) {
    std::cout << "DiamondTrap name : ";
    std::cout << this->name;
    std::cout << std::endl;
    std::cout << "ClapTrap name : ";
    std::cout << ClapTrap::name;
    std::cout << std::endl;
}