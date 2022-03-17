/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jayi <jayi@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 08:48:19 by jayi              #+#    #+#             */
/*   Updated: 2022/03/17 11:08:35 by jayi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <string>
#include <iostream>

#define CREATE_MESSAGE		"Goooooooooooooood..."
#define ANNOUNCE_MESSAGE	"BraiiiiiiinnnzzzZ..."
#define DESTRUCT_MESSAGE	"Diiiiiiiiiiiiiied..."

class Zombie
{
private:
	std::string name;
public:
	Zombie(void);
	Zombie(std::string name);
	~Zombie();
	void announce(void);
	void setName(std::string name);
};

Zombie* zombieHorde( int N, std::string name );

#endif