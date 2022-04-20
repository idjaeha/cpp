/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jayi <jayi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 08:14:58 by jaehayi           #+#    #+#             */
/*   Updated: 2022/04/20 15:52:22 by jayi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) {
    this->ScavTrap::name = "Unknown";
    this->ScavTrap::hitPoints = 100;
    this->ScavTrap::energyPoints = 50;
    this->ScavTrap::attackDamage = 20;

    std::cout << "ScavTrap ";
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

ScavTrap::ScavTrap(std::string name) {
    this->ScavTrap::name = name;
    this->ScavTrap::hitPoints = 100;
    this->ScavTrap::energyPoints = 50;
    this->ScavTrap::attackDamage = 20;

    std::cout << "ScavTrap ";
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

ScavTrap::ScavTrap(int hitPoints, int energyPoints, int attackDamage,
                   std::string name) {
    this->ScavTrap::name = name;
    this->ScavTrap::hitPoints = hitPoints;
    this->ScavTrap::energyPoints = energyPoints;
    this->ScavTrap::attackDamage = attackDamage;

    std::cout << "ScavTrap ";
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