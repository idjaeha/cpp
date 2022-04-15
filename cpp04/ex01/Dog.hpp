/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jayi <jayi@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 16:12:24 by jayi              #+#    #+#             */
/*   Updated: 2022/04/15 18:03:58 by jayi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
#define DOG_H

#include "Animal.hpp"
#include "Brain.hpp"
#include <iostream>
#include <string>

class Dog : public Animal {
  private:
    Brain *brain;

  public:
    Dog(void);
    ~Dog();
    Dog &operator=(const Dog &ref);
    Dog(const Dog &ref);

    void makeSound(void) const;
};

#endif