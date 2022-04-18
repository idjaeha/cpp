/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jayi <jayi@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 01:15:41 by jayi              #+#    #+#             */
/*   Updated: 2022/04/19 02:23:18 by jayi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void printInt(const int &number) {
    std::cout << "int : " << number << std::endl;
}

int main(void) {
    int intArr[3] = {1, 2, 3};

    ::iter(intArr, 3, printInt);

    return 0;
}