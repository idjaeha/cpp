/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jayi <jayi@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 12:59:56 by jayi              #+#    #+#             */
/*   Updated: 2022/03/17 13:13:28 by jayi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPOH_H
#define WEAPOH_H

#include <string>

class Weapon {
private:
	std::string type;
public:
	Weapon(std::string type);
	std::string	getType(void);
	void		setType(std::string type);
};

#endif