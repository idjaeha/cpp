/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jayi <jayi@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 21:11:51 by jayi              #+#    #+#             */
/*   Updated: 2022/04/17 22:14:13 by jayi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void) {
    {
        std::cout << "\n일반적인 상황," << std::endl;
        Bureaucrat bureaucrat;
        std::cout << bureaucrat << std::endl;
    }

    {
        std::cout << "\n0을 넣었을 때," << std::endl;
        try {
            Bureaucrat bureaucrat("jayi", 0);
            std::cout << bureaucrat << std::endl;
        } catch (std::exception &e) {
            std::cerr << e.what() << std::endl;
        }
    }

    {
        std::cout << "\n151을 넣었을 때," << std::endl;
        try {
            Bureaucrat bureaucrat("jayi", 151);
            std::cout << bureaucrat << std::endl;
        } catch (std::exception &e) {
            std::cerr << e.what() << std::endl;
        }
    }

    {
        std::cout << "\n2을 넣었을 때, 승진" << std::endl;
        try {
            Bureaucrat bureaucrat("jayi", 2);
            std::cout << bureaucrat << std::endl;
            bureaucrat.promote();
            std::cout << bureaucrat << std::endl;
        } catch (std::exception &e) {
            std::cerr << e.what() << std::endl;
        }
    }

    {
        std::cout << "\n1을 넣었을 때, 승진" << std::endl;
        try {
            Bureaucrat bureaucrat("jayi", 1);
            std::cout << bureaucrat << std::endl;
            bureaucrat.promote();
            std::cout << bureaucrat << std::endl;
        } catch (std::exception &e) {
            std::cerr << e.what() << std::endl;
        }
    }

    {
        std::cout << "\n149을 넣었을 때, 강등" << std::endl;
        try {
            Bureaucrat bureaucrat("jayi", 149);
            std::cout << bureaucrat << std::endl;
            bureaucrat.demote();
            std::cout << bureaucrat << std::endl;
        } catch (std::exception &e) {
            std::cerr << e.what() << std::endl;
        }
    }

    {
        std::cout << "\n150을 넣었을 때, 강등" << std::endl;
        try {
            Bureaucrat bureaucrat("jayi", 150);
            std::cout << bureaucrat << std::endl;
            bureaucrat.demote();
            std::cout << bureaucrat << std::endl;
        } catch (std::exception &e) {
            std::cerr << e.what() << std::endl;
        }
    }
}