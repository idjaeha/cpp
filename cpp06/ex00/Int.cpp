/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Int.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jayi <jayi@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 22:18:11 by jayi              #+#    #+#             */
/*   Updated: 2022/04/18 23:10:12 by jayi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Int.hpp"

Int::Int(void) : Number(NULL) {}
Int::Int(Info *info) : Number(info) {}
Int::~Int() {}
Int &Int::operator=(const Int &ref) {
    if (this != &ref) {
        this->info = ref.info;
    }
    return *this;
}
Int::Int(const Int &ref) { *this = ref; }
void Int::print(void) {
    std::cout << "int: ";

    long long signedInteger = info->integer;
    if (info->isMinus == true)
        signedInteger *= -1;

    if (info->special != "" ||
        !(std::numeric_limits<int>::min() <= signedInteger &&
          signedInteger <= std::numeric_limits<int>::max()))
        std::cout << "impossible" << std::endl;
    else {
        int temp = signedInteger;

        std::cout << temp << std::endl;
    }
}