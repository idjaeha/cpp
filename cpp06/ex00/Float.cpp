/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Float.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jayi <jayi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 22:22:15 by jayi              #+#    #+#             */
/*   Updated: 2022/04/22 14:11:56 by jayi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Float.hpp"

Float::Float(void) : Number(NULL) {}
Float::Float(Info *info) : Number(info) {}
Float::~Float() {}
Float &Float::operator=(const Float &ref) {
    if (this != &ref) {
        this->info = ref.info;
    }
    return *this;
}
Float::Float(const Float &ref) { *this = ref; }
void Float::print(void) {
    std::cout << "float: ";

    long double signedDouble = info->integer + info->decimal;
    if (this->info->isMinus == true)
        signedDouble *= -1;

    if (info->special == "nan") {
        std::cout << "nanf" << std::endl;
    } else if (info->integer == 0 && info->decimal == 0) {
        std::cout << "0.0f" << std::endl;
    } else if (info->special != "" ||
               !((std::numeric_limits<float>::min() <= signedDouble &&
                  signedDouble <= std::numeric_limits<float>::max()) ||
                 (-std::numeric_limits<float>::max() <= signedDouble &&
                  signedDouble <= -std::numeric_limits<float>::min()))) {
        std::cout << "impossible" << std::endl;
    } else if (info->special == "inf") {
        if (info->isMinus == true)
            std::cout << "-";
        else
            std::cout << "+";
        std::cout << "inff" << std::endl;
    } else {
        float temp = signedDouble;

        std::cout << temp;
        if (this->info->decimal == 0) {
            std::cout << ".0";
        }
        std::cout << "f" << std::endl;
    }
}