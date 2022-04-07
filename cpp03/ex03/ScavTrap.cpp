/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehayi <jaehayi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 08:14:58 by jaehayi           #+#    #+#             */
/*   Updated: 2022/04/07 09:41:45 by jaehayi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap(100, 50, 20, "Unknown") {
    std::cout << "ScavTrap ";
    std::cout << this->name;
    std::cout << " created.";
    std::cout << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(100, 50, 20, name) {
    std::cout << "ScavTrap ";
    std::cout << this->name;
    std::cout << " created.";
    std::cout << std::endl;
}

ScavTrap::ScavTrap(int hitPoints, int energyPoints, int attackDamage,
                   std::string name)
    : ClapTrap(hitPoints, energyPoints, attackDamage, name) {
    std::cout << "ScavTrap ";
    std::cout << this->name;
    std::cout << " created.";
    std::cout << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &ref) : ClapTrap(ref) {
    std::cout << "ScavTrap copy constructor." << std::endl;
    *this = ref;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &ref) {
    std::cout << "ScavTrap copy assignment operator." << std::endl;
    if (this != &ref) {
        this->hitPoints = ref.hitPoints;
        this->energyPoints = ref.energyPoints;
        this->attackDamage = ref.attackDamage;
        this->name = ref.name;
    }
    return *this;
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap ";
    std::cout << this->name;
    std::cout << " deleted.";
    std::cout << std::endl;
}

void ScavTrap::guardGate(void) {
    std::cout << "ScavTrap guard gate!";
    std::cout << std::endl;
}

void ScavTrap::attack(const std::string &target) {
    if (this->energyPoints > 0 && this->hitPoints > 0) {
        std::cout << "ScavTrap ";
        std::cout << this->name;
        std::cout << " attacks ";
        std::cout << target;
        std::cout << ", causing ";
        std::cout << this->attackDamage;
        std::cout << " points of damage!";

        int prev = this->energyPoints--;
        std::cout << " [EP : ";
        std::cout << prev;
        std::cout << " -> ";
        std::cout << this->energyPoints;
        std::cout << "]";
        std::cout << std::endl;
    } else {
        std::cout << "Nothing happened. (Attack)";
        std::cout << std::endl;
    }
}