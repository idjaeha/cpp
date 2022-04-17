/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jayi <jayi@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 16:12:24 by jayi              #+#    #+#             */
/*   Updated: 2022/04/15 18:03:25 by jayi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
#define CAT_H

#include "Animal.hpp"
#include <iostream>
#include <string>

class Cat : public Animal {
  public:
    Cat(void);
    ~Cat();
    Cat &operator=(const Cat &ref);
    Cat(const Cat &ref);

    void makeSound(void) const;
};

#endif