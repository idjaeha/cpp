/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jayi <jayi@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 01:15:41 by jayi              #+#    #+#             */
/*   Updated: 2022/04/19 01:59:31 by jayi             ###   ########.fr       */
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
    } else if (dynamic_cast<B *>(p) != NULL) {
        std::cout << "B" << std::endl;
    } else if (dynamic_cast<C *>(p) != NULL) {
        std::cout << "C" << std::endl;
    }
}

void identify(Base &p) {
    try {
        (void)dynamic_cast<A &>(p);
        std::cout << "A" << std::endl;
    } catch (std::exception &e) {
    }
    try {
        (void)dynamic_cast<B &>(p);
        std::cout << "B" << std::endl;
    } catch (std::exception &e) {
    }
    try {
        (void)dynamic_cast<C &>(p);
        std::cout << "C" << std::endl;
    } catch (std::exception &e) {
    }
}

int main(void) {
    Base *what = generate();

    identify(*what);
    identify(what);

    delete what;
}