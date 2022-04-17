/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jayi <jayi@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 17:27:13 by jayi              #+#    #+#             */
/*   Updated: 2022/04/17 17:28:18 by jayi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_H
#define CHARACTER_H

#include "Cure.hpp"
#include "ICharacter.hpp"
#include "Ice.hpp"
#include <iostream>

class Character : public ICharacter {
  private:
    AMateria *materias[4];
    int size;
    std::string name;

  public:
    Character(void);
    Character(std::string name);
    ~Character();
    Character(const Character &ref);
    Character &operator=(const Character &ref);

    std::string const &getName() const;
    void equip(AMateria *m);
    void unequip(int idx);
    void use(int idx, ICharacter &target);
};

#endif