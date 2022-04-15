/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jayi <jayi@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 08:14:59 by jaehayi           #+#    #+#             */
/*   Updated: 2022/04/14 20:14:18 by jayi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAV_TRAP_H
#define SCAV_TRAP_H

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap {
  public:
    ScavTrap(void);
    ScavTrap(int hitPoints, int energyPoints, int attackDamage,
             std::string name);
    ScavTrap(std::string name);
    ScavTrap(const ScavTrap &ref);
    ScavTrap &operator=(const ScavTrap &ref);
    ~ScavTrap();

    void guardGate(void);
    void attack(const std::string &target);
};

#endif