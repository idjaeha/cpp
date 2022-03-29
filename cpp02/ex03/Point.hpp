/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehayi <jaehayi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 10:42:47 by jaehayi           #+#    #+#             */
/*   Updated: 2022/03/29 12:13:59 by jaehayi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_H
#define POINT_H

#include "Fixed.hpp"
#include <cmath>

class Point {
private:
    Fixed x;
    Fixed y;
public:
    Point(void);
    Point(float const x, float const y);
    Point(const Point &);
    Point& operator=(const Point &ref);
    ~Point();
    Fixed getX(void) const;
    Fixed getY(void) const;
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif