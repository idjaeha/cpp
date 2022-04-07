/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehayi <jaehayi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 09:02:37 by jaehayi           #+#    #+#             */
/*   Updated: 2022/04/07 09:50:14 by jaehayi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(void) {
    /*
        기본 동작을 수행하는 시나리오.
    */
    std::cout << std::endl << "기본 동작을 수행하는 시나리오." << std::endl;
    {
        FragTrap fragTrap1("frag1");
        FragTrap fragTrap2(fragTrap1);
        FragTrap fragTrap3("frag3");

        fragTrap1.attack("you");
        fragTrap1.beRepaired(20);

        fragTrap3 = fragTrap1;

        fragTrap1.takeDamage(10);
        fragTrap2.takeDamage(20);
        fragTrap3.takeDamage(30);
    }

    /*
        100번 공격해서 에너지를 다 잃은 시나리오.
    */
    std::cout << std::endl
              << "100번 공격해서 에너지를 다 잃은 시나리오." << std::endl;
    {
        FragTrap fragTrap;

        for (int _ = 0; _ < 100; _++) {
            fragTrap.attack("you");
        }
        fragTrap.attack("you");
    }

    /*
        100번 회복해서 에너지를 다 잃은 시나리오.
    */
    std::cout << std::endl
              << "100번 회복해서 에너지를 다 잃은 시나리오." << std::endl;
    {
        FragTrap fragTrap;

        for (int _ = 0; _ < 100; _++) {
            fragTrap.beRepaired(2);
        }
        fragTrap.beRepaired(2);
    }

    /*
        50번 공격, 50번 회복해서 에너지를 다 잃은 시나리오.
    */
    std::cout << std::endl
              << "50번 공격, 50번 회복해서 에너지를 다 잃은 시나리오."
              << std::endl;
    {
        FragTrap fragTrap;

        for (int _ = 0; _ < 50; _++) {
            fragTrap.beRepaired(2);
        }
        for (int _ = 0; _ < 50; _++) {
            fragTrap.attack("you");
        }
        fragTrap.attack("you");
        fragTrap.beRepaired(2);
    }

    /*
        hp를 모두 잃는 시나리오
    */
    std::cout << std::endl << "hp를 모두 잃는 시나리오" << std::endl;
    {
        FragTrap fragTrap("frag");

        fragTrap.attack("you");
        for (int _ = 0; _ < 10; _++) {
            fragTrap.takeDamage(10);
        }
        fragTrap.attack("you");
        fragTrap.beRepaired(100);
        fragTrap.takeDamage(100);
    }

    /*
        highFivesGuys 사용해보는 시나리오
    */
    std::cout << std::endl << "highFivesGuys 사용해보는 시나리오" << std::endl;
    {
        FragTrap fragTrap;
        fragTrap.highFivesGuys();
    }
}