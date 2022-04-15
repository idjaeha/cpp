/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jayi <jayi@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 09:44:24 by jaehayi           #+#    #+#             */
/*   Updated: 2022/04/14 20:14:20 by jayi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAG_TRAP_H
#define FRAG_TRAP_H

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap {
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