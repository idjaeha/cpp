/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jayi <jayi@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 09:43:54 by jayi              #+#    #+#             */
/*   Updated: 2022/03/17 11:13:28 by jayi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	Zombie* zombies = new Zombie[N];
	for (int idx = 0; idx < N; idx++)
	{
		zombies[idx].setName(name);
	}
	return zombies;
}
