/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jayi <jayi@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 12:59:27 by jayi              #+#    #+#             */
/*   Updated: 2022/03/22 08:09:21 by jayi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"


void	HumanA::attack(void)
{
	std::cout	<< this->name
				<< " attacks with his "
				<< this->weapon.getType() 
				<< std::endl;
}

HumanA::HumanA(std::string name, Weapon &weapon) : name(name), weapon(weapon)
{
}