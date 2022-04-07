/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehayi <jaehayi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 09:44:09 by jaehayi           #+#    #+#             */
/*   Updated: 2022/04/07 09:48:08 by jaehayi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap(100, 100, 30, "Unknown") {
    std::cout << "FragTrap ";
    std::cout << this->name;
    std::cout << " created.";
    std::cout << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(100, 100, 30, name) {
    std::cout << "FragTrap ";
    std::cout << this->name;
    std::cout << " created.";
    std::cout << std::endl;
}

FragTrap::FragTrap(int hitPoints, int energyPoints, int attackDamage,
                   std::string name)
    : ClapTrap(hitPoints, energyPoints, attackDamage, name) {
    std::cout << "FragTrap ";
    std::cout << this->name;
    std::cout << " created.";
    std::cout << std::endl;
}

FragTrap::FragTrap(const FragTrap &ref) : ClapTrap(ref) {
    std::cout << "FragTrap copy constructor." << std::endl;
    *this = ref;
}

FragTrap &FragTrap::operator=(const FragTrap &ref) {
    std::cout << "FragTrap copy assignment operator." << std::endl;
    if (this != &ref) {
        this->hitPoints = ref.hitPoints;
        this->energyPoints = ref.energyPoints;
        this->attackDamage = ref.attackDamage;
        this->name = ref.name;
    }
    return *this;
}

FragTrap::~FragTrap() {
    std::cout << "FragTrap ";
    std::cout << this->name;
    std::cout << " deleted.";
    std::cout << std::endl;
}

void FragTrap::highFivesGuys(void) {
    std::cout << "FragTrap high fives guys!";
    std::cout << std::endl;
}

void FragTrap::attack(const std::string &target) {
    if (this->energyPoints > 0 && this->hitPoints > 0) {
        std::cout << "FragTrap ";
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