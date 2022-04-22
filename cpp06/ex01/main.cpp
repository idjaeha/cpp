/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jayi <jayi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 01:15:41 by jayi              #+#    #+#             */
/*   Updated: 2022/04/22 14:22:41 by jayi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"
#include <iostream>

uintptr_t serialize(Data *ptr) { return reinterpret_cast<uintptr_t>(ptr); }

Data *deserialize(uintptr_t raw) { return reinterpret_cast<Data *>(raw); }

int main(void) {
    Data *data = new Data(5);
    uintptr_t serialized = serialize(data);
    Data *deserialized = deserialize(serialized);

    std::cout << data << std::endl;

    std::cout << "* before *" << std::endl;
    std::cout << serialized << std::endl;
    data->print();

    std::cout << std::endl;
    std::cout << "* after *" << std::endl;
    std::cout << deserialized << std::endl;
    deserialized->print();

    delete data;
}