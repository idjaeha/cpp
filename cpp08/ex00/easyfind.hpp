/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jayi <jayi@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 02:04:00 by jayi              #+#    #+#             */
/*   Updated: 2022/04/22 20:49:23 by jayi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_H
#define EASYFIND_H

#include <algorithm>

template <typename T> typename T::iterator easyfind(T &container, int num) {
    typename T::iterator iter =
        std::find(container.begin(), container.end(), num);

    return iter;
}

#endif