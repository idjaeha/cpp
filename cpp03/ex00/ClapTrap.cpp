/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jayi <jayi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 09:02:35 by jaehayi           #+#    #+#             */
/*   Updated: 2022/04/20 15:29:56 by jayi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
    : hitPoints(10), energyPoints(10), attackDamage(0), name("Unknown") {
    std::cout << "ClapTrap ";
    std::cout << this->name;
    std::cout << " created.";
    std::cout << std::endl;
}

ClapTrap::ClapTrap(std::string name)
    : hitPoints(10), energyPoints(10), attackDamage(0), name(name) {
    std::cout << "ClapTrap ";
    std::cout << this->name;
    std::cout << " created.";
    std::cout << std::endl;
}

ClapTrap::ClapTrap(int hitPoints, int energyPoints, int attackDamage,
                   std::string name)
    : hitPoints(hitPoints), energyPoints(energyPoints),
      attackDamage(attackDamage), name(name) {
    if (hitPoints < 0)
        this->hitPoints = 0;
    if (energyPoints < 0)
        this->energyPoints = 0;
    if (attackDamage < 0)
        this->attackDamage = 0;

    std::cout << "ClapTrap ";
    std::cout << this->name;
    std::cout << " created.";
    std::cout << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &ref) {
    std::cout << "ClapTrap copy constructor." << std::endl;
    *this = ref;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &ref) {
    std::cout << "ClapTrap copy assignment operator." << std::endl;
    if (this != &ref) {
        this->hitPoints = ref.hitPoints;
        this->energyPoints = ref.energyPoints;
        this->attackDamage = ref.attackDamage;
        this->name = ref.name;
    }
    return *this;
}

ClapTrap::~ClapTrap() {
    std::cout << "ClapTrap ";
    std::cout << this->name;
    std::cout << " deleted.";
    std::cout << std::endl;
}

void ClapTrap::attack(const std::string &target) {
    if (this->energyPoints > 0 && this->hitPoints > 0) {
        std::cout << "ClapTrap ";
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

void ClapTrap::takeDamage(unsigned int amount) {
    if (amount > INT_MAX) {
        std::cout << "Amount is Too Big." << std::endl;
    }

    if (this->hitPoints > 0) {
        std::cout << "ClapTrap ";
        std::cout << this->name;
        std::cout << " take ";
        std::cout << amount;
        std::cout << " damage.";

        int prev = this->hitPoints;
        this->hitPoints -= amount;
        if (this->hitPoints <= 0) {
            this->hitPoints = 0;
        }
        std::cout << " [HP : ";
        std::cout << prev;
        std::cout << " -> ";
        std::cout << this->hitPoints;
        std::cout << "]";
        std::cout << std::endl;
    } else {
        std::cout << "Nothing happened. (TakeDamage)";
        std::cout << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount) {
    if (amount + this->hitPoints > INT_MAX) {
        std::cout << "Amount is Too Big." << std::endl;
    }

    if (this->energyPoints > 0 && this->hitPoints > 0) {
        std::cout << "ClapTrap ";
        std::cout << this->name;
        std::cout << " be ";
        std::cout << amount;
        std::cout << " repaired.";

        int prevHP = this->hitPoints;
        this->hitPoints += amount;
        int prevEP = this->energyPoints--;
        std::cout << " [HP : ";
        std::cout << prevHP;
        std::cout << " -> ";
        std::cout << this->hitPoints;
        std::cout << ", EP : ";
        std::cout << prevEP;
        std::cout << " -> ";
        std::cout << this->energyPoints;
        std::cout << "]";
        std::cout << std::endl;
    } else {
        std::cout << "Nothing happened. (BeRepaired)";
        std::cout << std::endl;
    }
}