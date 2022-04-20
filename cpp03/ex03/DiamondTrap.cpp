/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jayi <jayi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 11:39:31 by jaehayi           #+#    #+#             */
/*   Updated: 2022/04/20 16:58:42 by jayi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) {
    this->name = "Unknown";
    this->ClapTrap::name = this->name + "_clap_name";

    std::cout << "DiamondTrap ";
    std::cout << this->name;
    std::cout << " created.";
    std::cout << " [HP : ";
    std::cout << this->FragTrap::hitPoints;
    std::cout << ", EP : ";
    std::cout << this->ScavTrap::energyPoints;
    std::cout << ", AD : ";
    std::cout << this->FragTrap::attackDamage;
    std::cout << "]";
    std::cout << std::endl;
}

DiamondTrap::DiamondTrap(std::string name)
    : ClapTrap(name), ScavTrap(name), FragTrap(name) {
    this->name = name;
    this->ClapTrap::name = name + "_clap_name";

    std::cout << "DiamondTrap ";
    std::cout << this->name;
    std::cout << " created.";
    std::cout << " [HP : ";
    std::cout << this->FragTrap::hitPoints;
    std::cout << ", EP : ";
    std::cout << this->ScavTrap::energyPoints;
    std::cout << ", AD : ";
    std::cout << this->FragTrap::attackDamage;
    std::cout << "]";
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
        this->FragTrap::hitPoints = ref.FragTrap::hitPoints;
        this->ScavTrap::energyPoints = ref.ScavTrap::energyPoints;
        this->FragTrap::attackDamage = ref.FragTrap::attackDamage;
        this->name = ref.name;
        this->ClapTrap::name = ref.ClapTrap::name;
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
    std::cout << "Diamond name\t: ";
    std::cout << this->name;
    std::cout << std::endl;
    std::cout << "ClapTrap name\t: ";
    std::cout << this->ClapTrap::name;
    std::cout << std::endl;
}