/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jayi <jayi@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 08:47:55 by jayi              #+#    #+#             */
/*   Updated: 2022/03/17 11:13:21 by jayi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	const int number = 10;

	Zombie *zombies = zombieHorde(number, "hi");
	for (int idx = 0; idx < number; idx++)
	{
		zombies[idx].announce();
	}
	delete[] zombies;
}