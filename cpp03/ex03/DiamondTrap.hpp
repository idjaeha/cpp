/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehayi <jaehayi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 11:39:35 by jaehayi           #+#    #+#             */
/*   Updated: 2022/04/07 12:21:56 by jaehayi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMOND_TRAP_H
#define DIAMOND_TRAP_H

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {
  private:
    std::string name;

  public:
    DiamondTrap(void);
    DiamondTrap(int hitPoints, int energyPoints, int attackDamage,
                std::string name);
    DiamondTrap(std::string name);
    DiamondTrap(const DiamondTrap &ref);
    DiamondTrap &operator=(const DiamondTrap &ref);
    ~DiamondTrap();
    using ScavTrap::attack;

    void whoAmI(void);
};

#endif