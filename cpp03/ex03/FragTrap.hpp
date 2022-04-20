/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jayi <jayi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 09:44:24 by jaehayi           #+#    #+#             */
/*   Updated: 2022/04/20 16:21:33 by jayi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAG_TRAP_H
#define FRAG_TRAP_H

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap {
  protected:
    int hitPoints;
    int energyPoints;
    int attackDamage;
    std::string name;

  public:
    FragTrap(void);
    FragTrap(int hitPoints, int energyPoints, int attackDamage,
             std::string name);
    FragTrap(std::string name);
    FragTrap(const FragTrap &ref);
    FragTrap &operator=(const FragTrap &ref);
    ~FragTrap();

    void highFivesGuys(void);
    void attack(const std::string &target);
};

#endif