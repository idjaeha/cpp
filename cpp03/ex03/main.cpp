/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehayi <jaehayi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 09:02:37 by jaehayi           #+#    #+#             */
/*   Updated: 2022/04/07 12:50:41 by jaehayi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main(void) {
    /*
        기본 동작을 수행하는 시나리오.
    */
    std::cout << std::endl << "기본 동작을 수행하는 시나리오." << std::endl;
    {
        DiamondTrap diamondTrap1("diamond1");
        DiamondTrap diamondTrap2(diamondTrap1);
        DiamondTrap diamondTrap3("diamond3");

        diamondTrap1.attack("you");
        diamondTrap1.beRepaired(20);

        diamondTrap3 = diamondTrap1;

        diamondTrap1.takeDamage(10);
        diamondTrap2.takeDamage(20);
        diamondTrap3.takeDamage(30);
    }

    /*
        100번 공격해서 에너지를 다 잃은 시나리오.
    */
    std::cout << std::endl
              << "100번 공격해서 에너지를 다 잃은 시나리오." << std::endl;
    {
        DiamondTrap diamondTrap;

        for (int _ = 0; _ < 100; _++) {
            diamondTrap.attack("you");
        }
        diamondTrap.attack("you");
    }

    /*
        100번 회복해서 에너지를 다 잃은 시나리오.
    */
    std::cout << std::endl
              << "100번 회복해서 에너지를 다 잃은 시나리오." << std::endl;
    {
        DiamondTrap diamondTrap;

        for (int _ = 0; _ < 100; _++) {
            diamondTrap.beRepaired(2);
        }
        diamondTrap.beRepaired(2);
    }

    /*
        50번 공격, 50번 회복해서 에너지를 다 잃은 시나리오.
    */
    std::cout << std::endl
              << "50번 공격, 50번 회복해서 에너지를 다 잃은 시나리오."
              << std::endl;
    {
        DiamondTrap diamondTrap;

        for (int _ = 0; _ < 50; _++) {
            diamondTrap.beRepaired(2);
        }
        for (int _ = 0; _ < 50; _++) {
            diamondTrap.attack("you");
        }
        diamondTrap.attack("you");
        diamondTrap.beRepaired(2);
    }

    /*
        hp를 모두 잃는 시나리오
    */
    std::cout << std::endl << "hp를 모두 잃는 시나리오" << std::endl;
    {
        DiamondTrap diamondTrap("diamond");

        diamondTrap.attack("you");
        for (int _ = 0; _ < 10; _++) {
            diamondTrap.takeDamage(10);
        }
        diamondTrap.attack("you");
        diamondTrap.beRepaired(100);
        diamondTrap.takeDamage(100);
    }

    /*
        highFivesGuys 사용해보는 시나리오
    */
    std::cout << std::endl << "highFivesGuys 사용해보는 시나리오" << std::endl;
    {
        DiamondTrap diamondTrap;
        diamondTrap.highFivesGuys();
    }
}