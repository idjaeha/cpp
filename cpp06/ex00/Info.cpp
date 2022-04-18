/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Info.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jayi <jayi@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 22:01:53 by jayi              #+#    #+#             */
/*   Updated: 2022/04/18 22:53:42 by jayi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Info.hpp"

Info::Info(void)
    : isMinus(false), existsPoint(false), special(""), integer(0), decimal(0) {}

Info::Info(bool isMinus, bool existsPoint, const std::string special,
           long long integer, double decimal)
    : isMinus(isMinus), existsPoint(existsPoint), special(special),
      integer(integer), decimal(decimal) {}

Info::~Info() {}

Info &Info::operator=(const Info &ref) {
    if (this != &ref) {
        this->isMinus = ref.isMinus;
        this->existsPoint = ref.existsPoint;
        this->integer = ref.integer;
        this->decimal = ref.decimal;
    }
    return (*this);
}

Info::Info(const Info &ref) { *this = ref; }