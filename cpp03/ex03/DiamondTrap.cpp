/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jayi <jayi@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 11:39:31 by jaehayi           #+#    #+#             */
/*   Updated: 2022/04/14 20:53:13 by jayi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) {
    this->name = "Unknown";
    this->ClapTrap::name = this->name + "_clap_name";
    this->hitPoints = this->FragTrap::hitPoints;
    this->energyPoints = this->ScavTrap::energyPoints;
    this->attackDamage = this->FragTrap::attackDamage;

    std::cout << "DiamondTrap ";
    std::cout << this->name;
    std::cout << " created.";
    std::cout << " [HP : ";
    std::cout << this->hitPoints;
    std::cout << ", EP : ";
    std::cout << this->energyPoints;
    std::cout << ", AD : ";
    std::cout << this->attackDamage;
    std::cout << "]";
    std::cout << std::endl;
}

DiamondTrap::DiamondTrap(std::string name)
    : ClapTrap(name), ScavTrap(name), FragTrap(name) {
    this->name = name;
    this->ClapTrap::name = name + "_clap_name";
    this->hitPoints = this->FragTrap::hitPoints;
    this->energyPoints = this->ScavTrap::energyPoints;
    this->attackDamage = this->FragTrap::attackDamage;

    std::cout << "DiamondTrap ";
    std::cout << this->name;
    std::cout << " created.";
    std::cout << " [HP : ";
    std::cout << this->hitPoints;
    std::cout << ", EP : ";
    std::cout << this->energyPoints;
    std::cout << ", AD : ";
    std::cout << this->attackDamage;
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
    std::cout << "Diamond name\t: ";
    std::cout << this->name;
    std::cout << std::endl;
    std::cout << "ClapTrap name\t: ";
    std::cout << this->ClapTrap::name;
    std::cout << std::endl;
}