/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jayi <jayi@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 15:27:56 by jayi              #+#    #+#             */
/*   Updated: 2022/04/17 17:33:28 by jayi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_H
#define AMATERIA_H

#include "ICharacter.hpp"
#include <iostream>
#include <string>

class AMateria {
  protected:
    std::string type;

  public:
    AMateria(void);
    AMateria(std::string const &type);
    AMateria(const AMateria &ref);
    virtual ~AMateria();
    AMateria &operator=(const AMateria &ref);

    std::string const &getType(void) const;
    virtual AMateria *clone(void) const = 0;
    virtual void use(ICharacter &target);
};

#endif