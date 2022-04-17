/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jayi <jayi@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 16:10:41 by jayi              #+#    #+#             */
/*   Updated: 2022/04/17 15:02:03 by jayi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Brain.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main(void) {
    // const Animal animal;

    const Animal *animals[2];

    animals[0] = new Dog();
    animals[1] = new Cat();

    for (int idx = 0; idx < 2; idx++)
        delete animals[idx];

    std::cout << std::endl;

    const Dog *dog1 = new Dog();
    dog1->setIdea(0, "hello dog");

    const Dog *dog2 = new Dog(*dog1);
    dog1->printIdea(0);
    dog2->printIdea(0);

    std::cout << std::endl;

    dog2->setIdea(0, "hi dog");
    dog1->printIdea(0);
    dog2->printIdea(0);

    delete dog1;
    delete dog2;

    std::cout << std::endl;

    const Cat *cat1 = new Cat();
    cat1->setIdea(0, "hello cat");

    const Cat *cat2 = new Cat(*cat1);
    cat1->printIdea(0);
    cat2->printIdea(0);

    std::cout << std::endl;

    cat2->setIdea(0, "hi cat");
    cat1->printIdea(0);
    cat2->printIdea(0);

    delete cat1;
    delete cat2;
}