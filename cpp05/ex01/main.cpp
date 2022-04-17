/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jayi <jayi@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 21:11:51 by jayi              #+#    #+#             */
/*   Updated: 2022/04/18 00:56:30 by jayi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void) {
    {
        std::cout << "\n일반적인 상황," << std::endl;
        Bureaucrat bureaucrat;
        Form form;

        std::cout << bureaucrat << std::endl;
        std::cout << form << std::endl;
    }

    {
        std::cout << "\nform sign grade가 0인 상황" << std::endl;
        Bureaucrat bureaucrat;
        try {
            Form form("jayi", 0, 150);

            std::cout << bureaucrat << std::endl;
            std::cout << form << std::endl;
        } catch (std::exception &e) {
            std::cerr << e.what() << std::endl;
        }
    }

    {
        std::cout << "\nform sign grade가 151인 상황" << std::endl;
        Bureaucrat bureaucrat;
        try {
            Form form("jayi", 151, 150);

            std::cout << bureaucrat << std::endl;
            std::cout << form << std::endl;
        } catch (std::exception &e) {
            std::cerr << e.what() << std::endl;
        }
    }

    {
        std::cout << "\nsign이 가능한 상황" << std::endl;
        try {
            Bureaucrat bureaucrat("jayi", 100);
            Form form("jayi's form", 110, 150);

            std::cout << bureaucrat << std::endl;
            std::cout << form << std::endl;

            bureaucrat.signForm(form);
        } catch (std::exception &e) {
            std::cerr << e.what() << std::endl;
        }
    }

    {
        std::cout << "\nsign이 불가능한 상황" << std::endl;
        try {
            Bureaucrat bureaucrat("jayi", 150);
            Form form("jayi's form", 110, 150);

            std::cout << bureaucrat << std::endl;
            std::cout << form << std::endl;

            bureaucrat.signForm(form);
        } catch (std::exception &e) {
            std::cerr << e.what() << std::endl;
        }
    }
}