/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jayi <jayi@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 02:04:00 by jayi              #+#    #+#             */
/*   Updated: 2022/04/19 02:11:29 by jayi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_H
#define WHATEVER_H

template <typename T> void swap(T &a, T &b) {
    T temp;

    temp = a;
    a = b;
    b = temp;
}

template <typename T> const T max(const T &a, const T &b) {
    if (a > b)
        return a;
    else
        return b;
}

template <typename T> const T min(const T &a, const T &b) {
    if (a < b)
        return a;
    else
        return b;
}

#endif