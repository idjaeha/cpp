/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jayi <jayi@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 16:12:24 by jayi              #+#    #+#             */
/*   Updated: 2022/04/15 17:26:50 by jayi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_ANIMAL_H
#define WRONG_ANIMAL_H

#include <iostream>
#include <string>

class WrongAnimal {
  protected:
    std::string type;

  public:
    WrongAnimal(void);
    ~WrongAnimal();
    WrongAnimal &operator=(const WrongAnimal &ref);
    WrongAnimal(const WrongAnimal &ref);

    void makeSound(void) const;
    std::string getType(void) const;
};

#endif