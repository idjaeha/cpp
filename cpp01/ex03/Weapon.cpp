/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jayi <jayi@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 12:59:52 by jayi              #+#    #+#             */
/*   Updated: 2022/03/22 08:08:12 by jayi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"


Weapon::Weapon(std::string type) : type(type)
{
}

std::string Weapon::getType(void)
{
	return this->type;
}

void	Weapon::setType(std::string type)
{
	this->type = type;
}