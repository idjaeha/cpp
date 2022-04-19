/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jayi <jayi@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 01:15:41 by jayi              #+#    #+#             */
/*   Updated: 2022/04/19 22:31:03 by jayi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>
#include <vector>

int main(void) {
    std::cout << "일반적인 상황" << std::endl;
    {
        Span sp = Span(5);

        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);

        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }

    std::cout << "\n정수 최대, 최소값이 들어간 상황" << std::endl;
    {
        Span sp = Span(5);

        sp.addNumber(INT32_MAX);
        sp.addNumber(INT32_MIN);

        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }

    std::cout << "\n사이즈보다 많은 값을 넣을려고 하는 상황" << std::endl;
    {
        Span sp = Span(1);

        try {
            sp.addNumber(INT32_MAX);
            sp.addNumber(INT32_MIN);

            std::cout << sp.shortestSpan() << std::endl;
            std::cout << sp.longestSpan() << std::endl;
        } catch (std::exception &e) {
            std::cerr << e.what() << std::endl;
        }
    }

    std::cout << "\n정수가 1개 이하인 상황" << std::endl;
    {
        Span sp = Span(1);

        try {
            sp.addNumber(INT32_MAX);

            std::cout << sp.shortestSpan() << std::endl;
            std::cout << sp.longestSpan() << std::endl;
        } catch (std::exception &e) {
            std::cerr << e.what() << std::endl;
        }
    }

    std::cout << "\n일반적인 상황 2" << std::endl;
    {
        Span sp = Span(5);

        try {
            sp.addNumber(1);
            sp.addNumber(2);
            sp.addNumber(3);
            sp.addNumber(5);
            sp.addNumber(5);

            std::cout << sp.shortestSpan() << std::endl;
            std::cout << sp.longestSpan() << std::endl;
        } catch (std::exception &e) {
            std::cerr << e.what() << std::endl;
        }
    }

    std::cout << "\n50000개가 들어간 상황" << std::endl;
    {
        Span sp = Span(50000);

        try {
            sp.initRandomNumbers();

            std::cout << sp.shortestSpan() << std::endl;
            std::cout << sp.longestSpan() << std::endl;
        } catch (std::exception &e) {
            std::cerr << e.what() << std::endl;
        }
    }

    return 0;
}
