/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jayi <jayi@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 17:26:31 by jayi              #+#    #+#             */
/*   Updated: 2022/04/15 17:26:39 by jayi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_CAT_H
#define WRONG_CAT_H

#include "WrongAnimal.hpp"
#include <iostream>
#include <string>

class WrongCat : public WrongAnimal {
  public:
    WrongCat(void);
    ~WrongCat();
    WrongCat &operator=(const WrongCat &ref);
    WrongCat(const WrongCat &ref);

    void makeSound(void) const;
};

#endif