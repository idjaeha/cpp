/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jayi <jayi@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 16:12:24 by jayi              #+#    #+#             */
/*   Updated: 2022/04/17 14:44:24 by jayi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
#define CAT_H

#include "Animal.hpp"
#include "Brain.hpp"
#include <iostream>
#include <string>

class Cat : public Animal {
  private:
    Brain *brain;

  public:
    Cat(void);
    ~Cat();
    Cat &operator=(const Cat &ref);
    Cat(const Cat &ref);

    void makeSound(void) const;
    void printIdea(int index) const;
    void setIdea(int index, std::string idea) const;
};

#endif