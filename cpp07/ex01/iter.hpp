/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jayi <jayi@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 02:04:00 by jayi              #+#    #+#             */
/*   Updated: 2022/04/19 02:19:50 by jayi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_H
#define ITER_H

#include <iostream>

template <typename T>
void iter(const T array[], const size_t length, void (*func)(const T &)) {
    for (size_t idx = 0; idx < length; idx++)
        func(array[idx]);
}

#endif