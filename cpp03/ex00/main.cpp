/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jayi <jayi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 09:02:37 by jaehayi           #+#    #+#             */
/*   Updated: 2022/04/20 15:29:12 by jayi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void) {
    /*
        기본 동작을 수행하는 시나리오.
    */
    std::cout << std::endl << "기본 동작을 수행하는 시나리오." << std::endl;
    {
        ClapTrap clapTrap1("scav1");
        ClapTrap clapTrap2(clapTrap1);
        ClapTrap clapTrap3("scav3");

        clapTrap1.attack("you");
        clapTrap1.beRepaired(20);

        clapTrap3 = clapTrap1;

        clapTrap1.takeDamage(10);
        clapTrap2.takeDamage(20);
        clapTrap3.takeDamage(30);
    }

    /*
        10번 공격해서 에너지를 다 잃은 시나리오.
    */
    std::cout << std::endl
              << "10번 공격해서 에너지를 다 잃은 시나리오." << std::endl;
    {
        ClapTrap clapTrap;

        for (int _ = 0; _ < 10; _++) {
            clapTrap.attack("you");
        }
        clapTrap.attack("you");
    }

    /*
        10번 회복해서 에너지를 다 잃은 시나리오.
    */
    std::cout << std::endl
              << "10번 회복해서 에너지를 다 잃은 시나리오." << std::endl;
    {
        ClapTrap clapTrap;

        for (int _ = 0; _ < 10; _++) {
            clapTrap.beRepaired(2);
        }
        clapTrap.beRepaired(2);
    }

    /*
        5번 공격, 5번 회복해서 에너지를 다 잃은 시나리오.
    */
    std::cout << std::endl
              << "5번 공격, 5번 회복해서 에너지를 다 잃은 시나리오."
              << std::endl;
    {
        ClapTrap clapTrap;

        for (int _ = 0; _ < 5; _++) {
            clapTrap.attack("you");
            clapTrap.beRepaired(2);
        }
        clapTrap.attack("you");
        clapTrap.beRepaired(2);
    }

    /*
        hp를 모두 잃는 시나리오
    */
    std::cout << std::endl << "hp를 모두 잃는 시나리오" << std::endl;
    {
        ClapTrap clapTrap(10, 10, 10, "clap");

        clapTrap.attack("you");
        for (int _ = 0; _ < 10; _++) {
            clapTrap.takeDamage(1);
        }
        clapTrap.attack("you");
        clapTrap.beRepaired(100);
        clapTrap.takeDamage(100);
    }
}