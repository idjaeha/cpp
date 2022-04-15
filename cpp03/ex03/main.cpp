/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jayi <jayi@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 09:02:37 by jaehayi           #+#    #+#             */
/*   Updated: 2022/04/14 20:52:45 by jayi             ###   ########.fr       */
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
        highFivesGuys, guardGate를 사용해보는 시나리오
    */
    std::cout << std::endl
              << "highFivesGuys, guardGate를 사용해보는 시나리오" << std::endl;
    {
        DiamondTrap diamondTrap;
        diamondTrap.highFivesGuys();
        diamondTrap.guardGate();
    }

    /*
        whoAmI 사용해보는 시나리오
    */
    std::cout << std::endl << "whoAmI 사용해보는 시나리오" << std::endl;
    {
        DiamondTrap diamondTrap("Diamond");
        diamondTrap.whoAmI();
    }
}