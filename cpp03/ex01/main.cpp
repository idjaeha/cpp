/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehayi <jaehayi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 09:02:37 by jaehayi           #+#    #+#             */
/*   Updated: 2022/04/07 09:41:01 by jaehayi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void) {
    /*
        기본 동작을 수행하는 시나리오.
    */
    std::cout << std::endl << "기본 동작을 수행하는 시나리오." << std::endl;
    {
        ScavTrap scavTrap1("scav1");
        ScavTrap scavTrap2(scavTrap1);
        ScavTrap scavTrap3("scav3");

        scavTrap1.attack("you");
        scavTrap1.beRepaired(20);

        scavTrap3 = scavTrap1;

        scavTrap1.takeDamage(10);
        scavTrap2.takeDamage(20);
        scavTrap3.takeDamage(30);
    }

    /*
        50번 공격해서 에너지를 다 잃은 시나리오.
    */
    std::cout << std::endl
              << "50번 공격해서 에너지를 다 잃은 시나리오." << std::endl;
    {
        ScavTrap scavTrap;

        for (int _ = 0; _ < 50; _++) {
            scavTrap.attack("you");
        }
        scavTrap.attack("you");
    }

    /*
        50번 회복해서 에너지를 다 잃은 시나리오.
    */
    std::cout << std::endl
              << "50번 회복해서 에너지를 다 잃은 시나리오." << std::endl;
    {
        ScavTrap scavTrap;

        for (int _ = 0; _ < 50; _++) {
            scavTrap.beRepaired(2);
        }
        scavTrap.beRepaired(2);
    }

    /*
        25번 공격, 25번 회복해서 에너지를 다 잃은 시나리오.
    */
    std::cout << std::endl
              << "25번 공격, 25번 회복해서 에너지를 다 잃은 시나리오."
              << std::endl;
    {
        ScavTrap scavTrap;

        for (int _ = 0; _ < 25; _++) {
            scavTrap.beRepaired(2);
        }
        for (int _ = 0; _ < 25; _++) {
            scavTrap.attack("you");
        }
        scavTrap.attack("you");
        scavTrap.beRepaired(2);
    }

    /*
        hp를 모두 잃는 시나리오
    */
    std::cout << std::endl << "hp를 모두 잃는 시나리오" << std::endl;
    {
        ScavTrap scavTrap("scav");

        scavTrap.attack("you");
        for (int _ = 0; _ < 10; _++) {
            scavTrap.takeDamage(10);
        }
        scavTrap.attack("you");
        scavTrap.beRepaired(100);
        scavTrap.takeDamage(100);
    }

    /*
        guardGate 사용해보는 시나리오
    */
    std::cout << std::endl << "guardGate 사용해보는 시나리오" << std::endl;
    {
        ScavTrap scavTrap;
        scavTrap.guardGate();
    }
}