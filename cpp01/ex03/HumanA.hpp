/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jayi <jayi@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 12:59:31 by jayi              #+#    #+#             */
/*   Updated: 2022/03/22 08:07:21 by jayi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A_H
#define HUMAN_A_H

#include "Weapon.hpp"
#include <iostream>

class HumanA {
private:
	std::string	name;
	Weapon		&weapon;
public:
	HumanA(std::string name, Weapon &weapon);
	void	attack(void);
};

#endif