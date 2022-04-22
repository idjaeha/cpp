/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jayi <jayi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 02:04:00 by jayi              #+#    #+#             */
/*   Updated: 2022/04/22 16:00:22 by jayi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_H
#define EASYFIND_H

#include <algorithm>

class NotFoundException : public std::exception {
    virtual const char *what(void) const throw() { return "number not fonud."; }
};

template <typename T> typename T::iterator easyfind(T &container, int num) {
    typename T::iterator iter =
        std::find(container.begin(), container.end(), num);
    if (iter == container.end())
        throw NotFoundException();
    return iter;
}

#endif