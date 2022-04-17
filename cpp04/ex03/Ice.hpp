/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jayi <jayi@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 15:35:54 by jayi              #+#    #+#             */
/*   Updated: 2022/04/17 17:21:32 by jayi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_H
#define ICE_H

#include "AMateria.hpp"

class Ice : public AMateria {
  public:
    Ice(void);
    Ice(const Ice &ref);
    ~Ice();
    Ice &operator=(const Ice &ref);
    AMateria *clone(void) const;
    void use(ICharacter &target);
};

#endif