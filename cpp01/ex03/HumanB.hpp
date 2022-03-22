/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jayi <jayi@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 12:59:41 by jayi              #+#    #+#             */
/*   Updated: 2022/03/21 09:34:05 by jayi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B_H
#define HUMAN_B_H

#include "Weapon.hpp"
#include <iostream>

class HumanB {
private:
	std::string	name;
	Weapon		*weapon;
public:
	HumanB(std::string name);
	void	setWeapon(Weapon &weapon);
	void	attack(void);
};

#endif
