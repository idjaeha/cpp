/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Info.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jayi <jayi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 21:10:01 by jayi              #+#    #+#             */
/*   Updated: 2022/04/22 14:14:38 by jayi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INFO_H
#define INFO_H

#include <string>

class Info {
  public:
    bool isMinus;
    bool existsPoint;
    const std::string special;
    long long integer;
    long double decimal;

    Info(void);
    Info(bool isMinus, bool existsPoint, const std::string special,
         long long integer, long double decimal);
    ~Info();
    Info &operator=(const Info &ref);
    Info(const Info &ref);
};

#endif