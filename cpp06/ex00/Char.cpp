/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Char.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jayi <jayi@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 22:22:37 by jayi              #+#    #+#             */
/*   Updated: 2022/04/18 23:11:02 by jayi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Char.hpp"

Char::Char(void) : Number(NULL) {}

Char::Char(Info *info) : Number(info) {}

Char::~Char() {}

Char &Char::operator=(const Char &ref) {
    if (this != &ref) {
        this->info = ref.info;
    }
    return *this;
}

Char::Char(const Char &ref) { *this = ref; }

void Char::print(void) {
    std::cout << "char: ";
    long long signedInteger = info->integer;
    if (this->info->isMinus == true)
        signedInteger *= -1;

    if (info->special != "" ||
        !(std::numeric_limits<char>::min() <= signedInteger &&
          signedInteger <= std::numeric_limits<char>::max()))
        std::cout << "impossible" << std::endl;
    else if (!(32 <= signedInteger && signedInteger <= 126))
        std::cout << "Non displayable" << std::endl;
    else {
        char temp = signedInteger;

        std::cout << "'" << temp << "'" << std::endl;
    }
}