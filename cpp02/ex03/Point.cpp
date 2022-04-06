/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehayi <jaehayi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 10:42:47 by jaehayi           #+#    #+#             */
/*   Updated: 2022/03/29 12:31:21 by jaehayi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void) : x(0), y(0)
{
}

Point::Point(float x, float y) : x(x), y(y)
{
}

Point::Point(const Point &ref)
{
    *this = ref;
}

Point &Point::operator=(const Point &ref)
{
    if (this != &ref)
    {
        this->x = ref.x;
        this->y = ref.y;
    }
    return (*this);
}

Point::~Point()
{
}

Fixed Point::getX(void) const
{
    return x;
}

Fixed Point::getY(void) const
{
    return y;
}