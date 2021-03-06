/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jayi <jayi@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 08:48:30 by jayi              #+#    #+#             */
/*   Updated: 2022/03/17 09:39:11 by jayi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void printName(std::string name)
{
	std::cout << "<" << name << "> ";
}

void Zombie::announce(void)
{
	printName(this->name);
	std::cout << ANNOUNCE_MESSAGE << std::endl;
}

Zombie::~Zombie()
{
	printName(this->name);
	std::cout << DESTRUCT_MESSAGE << std::endl;
}

Zombie::Zombie(std::string name): name(name)
{
	printName(name);
	std::cout << CREATE_MESSAGE << std::endl;
}
