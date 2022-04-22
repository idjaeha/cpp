/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jayi <jayi@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 01:15:41 by jayi              #+#    #+#             */
/*   Updated: 2022/04/22 20:42:14 by jayi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <iostream>
#include <vector>

int main(void) {
    std::vector<int> vec;
    std::vector<int>::iterator iter;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);

    iter = ::easyfind(vec, 1);
    std::cout << *iter << std::endl;
    try {
        iter = ::easyfind(vec, 4);
    } catch (std::exception &e) {
        std::cerr << e.what() << std::endl;
    }
}