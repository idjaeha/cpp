/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jayi <jayi@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 16:12:24 by jayi              #+#    #+#             */
/*   Updated: 2022/04/15 17:07:15 by jayi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
#include <string>

class Animal {
  protected:
    std::string type;

  public:
    Animal(void);
    virtual ~Animal();
    Animal &operator=(const Animal &ref);
    Animal(const Animal &ref);

    virtual void makeSound(void) const;
    std::string getType(void) const;
};

#endif