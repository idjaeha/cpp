/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jayi <jayi@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 15:35:45 by jayi              #+#    #+#             */
/*   Updated: 2022/04/17 17:21:32 by jayi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_H
#define CURE_H

#include "AMateria.hpp"

class Cure : public AMateria {
  public:
    Cure(void);
    Cure(const Cure &ref);
    ~Cure();
    Cure &operator=(const Cure &ref);
    AMateria *clone(void) const;
    void use(ICharacter &target);
};

#endif