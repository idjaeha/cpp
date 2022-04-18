/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jayi <jayi@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 01:16:00 by jayi              #+#    #+#             */
/*   Updated: 2022/04/19 01:18:57 by jayi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data(void) : something(0) {}

Data::Data(int something) : something(something) {}

Data::~Data() {}

Data::Data(const Data &ref) { *this = ref; }

Data &Data::operator=(const Data &ref) {
    if (this != &ref)
        this->something = ref.something;
    return *this;
}

void Data::print(void) { std::cout << something << std::endl; }