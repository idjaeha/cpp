/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jayi <jayi@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 01:15:41 by jayi              #+#    #+#             */
/*   Updated: 2022/04/22 20:13:33 by jayi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void printInt(const int &number) {
    std::cout << "int : " << number << std::endl;
}

template <typename T> void test(T test) {
    std::cout << test + test << std::endl;
}

int main(void) {
    int intArr[3] = {1, 2, 3};

    ::iter(intArr, 3, printInt);
    ::iter(intArr, 3, test);

    return 0;
}