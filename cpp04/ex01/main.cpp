/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jayi <jayi@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 16:10:41 by jayi              #+#    #+#             */
/*   Updated: 2022/04/15 18:09:39 by jayi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Brain.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main(void) {
    const Animal *meta[100];

    for (int idx = 0; idx < 50; idx++)
        meta[idx] = new Dog();
    for (int idx = 50; idx < 100; idx++)
        meta[idx] = new Cat();

    for (int idx = 0; idx < 100; idx++)
        delete meta[idx];
}