/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Double.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jayi <jayi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 22:22:30 by jayi              #+#    #+#             */
/*   Updated: 2022/04/22 14:14:52 by jayi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Double.hpp"

Double::Double(void) : Number(NULL) {}
Double::Double(Info *info) : Number(info) {}
Double::~Double() {}
Double &Double::operator=(const Double &ref) {
    if (this != &ref) {
        this->info = ref.info;
    }
    return *this;
}
Double::Double(const Double &ref) { *this = ref; }
void Double::print(void) {
    std::cout << "double: ";

    long double signedDouble = info->integer + info->decimal;
    if (this->info->isMinus == true)
        signedDouble *= -1;

    if (info->special == "nan") {
        std::cout << "nan" << std::endl;
    } else if (info->integer == 0 && info->decimal == 0) {
        std::cout << "0.0" << std::endl;
    } else if (info->special != "" ||
               !((std::numeric_limits<double>::min() <= signedDouble &&
                  signedDouble <= std::numeric_limits<double>::max()) ||
                 (-std::numeric_limits<double>::max() <= signedDouble &&
                  signedDouble <= -std::numeric_limits<double>::min()))) {
        std::cout << "impossible" << std::endl;
    } else if (info->special == "inf") {
        if (info->isMinus == true)
            std::cout << "-";
        else
            std::cout << "+";
        std::cout << "inf" << std::endl;
    } else {
        double temp = signedDouble;

        std::cout << temp;
        if (this->info->decimal == 0) {
            std::cout << ".0";
        }
        std::cout << std::endl;
    }
}