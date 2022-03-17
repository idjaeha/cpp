/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jayi <jayi@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 08:47:55 by jayi              #+#    #+#             */
/*   Updated: 2022/03/17 10:49:09 by jayi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie first("hello");
	first.announce();
	
	{
		Zombie zombie("hi");
		zombie.announce();
	}

	Zombie *zombie = new Zombie("new");
	zombie->announce();
	delete zombie;

	zombie = newZombie("new func");
	zombie->announce();
	randomChump("random func");
	delete zombie;
}