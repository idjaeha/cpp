/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jayi <jayi@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 09:44:09 by jaehayi           #+#    #+#             */
/*   Updated: 2022/04/14 19:55:59 by jayi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) {
    this->FragTrap::name = "Unknown";
    this->FragTrap::hitPoints = 100;
    this->FragTrap::energyPoints = 100;
    this->FragTrap::attackDamage = 30;

    std::cout << "FragTrap ";
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

FragTrap::FragTrap(std::string name) {
    this->FragTrap::name = name;
    this->FragTrap::hitPoints = 100;
    this->FragTrap::energyPoints = 100;
    this->FragTrap::attackDamage = 30;

    std::cout << "FragTrap ";
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

FragTrap::FragTrap(int hitPoints, int energyPoints, int attackDamage,
                   std::string name) {
    this->FragTrap::name = name;
    this->FragTrap::hitPoints = hitPoints;
    this->FragTrap::energyPoints = energyPoints;
    this->FragTrap::attackDamage = attackDamage;

    std::cout << "FragTrap ";
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