/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jayi <jayi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 01:15:41 by jayi              #+#    #+#             */
/*   Updated: 2022/04/22 16:12:29 by jayi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "Base.hpp"
#include "C.hpp"
#include <iostream>

Base *generate(void) {
    time_t t;
    srand(time(&t));

    int flag = rand() % 3;

    if (flag == 0)
        return new A();
    else if (flag == 1)
        return new B();
    else
        return new C();
}

void identify(Base *p) {
    if (dynamic_cast<A *>(p) != NULL) {
        std::cout << "A" << std::endl;
        return;
    } else if (dynamic_cast<B *>(p) != NULL) {
        std::cout << "B" << std::endl;
        return;
    } else if (dynamic_cast<C *>(p) != NULL) {
        std::cout << "C" << std::endl;
        return;
    }
}

void identify(Base &p) {
    try {
        (void)dynamic_cast<A &>(p);
        std::cout << "A" << std::endl;
        return;
    } catch (std::exception &e) {
    }
    try {
        (void)dynamic_cast<B &>(p);
        std::cout << "B" << std::endl;
        return;
    } catch (std::exception &e) {
    }
    try {
        (void)dynamic_cast<C &>(p);
        std::cout << "C" << std::endl;
        return;
    } catch (std::exception &e) {
    }
}

int main(void) {
    Base *what = generate();

    identify(*what);
    identify(what);

    delete what;
}