/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jayi <jayi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 08:58:40 by jaehayi           #+#    #+#             */
/*   Updated: 2022/04/20 16:12:13 by jayi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAP_TRAP_H
#define CLAP_TRAP_H

#include <climits>
#include <iostream>
#include <string>

class ClapTrap {
  protected:
    int hitPoints;
    int energyPoints;
    int attackDamage;
    std::string name;

  public:
    ClapTrap(void);
    ClapTrap(int hitPoints, int energyPoints, int attackDamage,
             std::string name);
    ClapTrap(std::string name);
    ClapTrap(const ClapTrap &ref);
    ClapTrap &operator=(const ClapTrap &ref);
    ~ClapTrap();

    void attack(const std::string &target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};

#endif