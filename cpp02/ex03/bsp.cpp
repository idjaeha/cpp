/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehayi <jaehayi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 10:42:28 by jaehayi           #+#    #+#             */
/*   Updated: 2022/03/29 12:17:01 by jaehayi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

float getArea(float const len1, float const len2, float const len3)
{
    return 0.25 * sqrtf32((len1 + len2 + len3) * (-len1 + len2 + len3) * (len1 - len2 + len3) * (len1 + len2 - len3));
}

float getLength(Point const a, Point const b)
{
    return sqrtf32(pow(a.getX().toFloat() - b.getX().toFloat(), 2) + pow(a.getY().toFloat() - b.getY().toFloat(), 2));
}

bool isEqual(float a, float b)
{
    static const float EPS = 0.005;

    return (a - EPS <= b && b <= a + EPS);
}

/*
삼각형의 세변의 길이를 알면 구할 수 있는 공식
헤론의 공식을 사용
*/
bool bsp( Point const a, Point const b, Point const c, Point const point)
{
    float lenAB = getLength(a, b);
    float lenBC = getLength(b, c);
    float lenCA = getLength(c, a);

    float lenPA = getLength(point, a);
    float lenPB = getLength(point, b);
    float lenPC = getLength(point, c);

    float areaABC = getArea(lenAB, lenBC, lenCA);
    float areaPAB = getArea(lenPA, lenPB, lenAB);
    float areaPBC = getArea(lenPB, lenPC, lenBC);
    float areaPCA = getArea(lenPC, lenPA, lenCA);

    if  (
        isEqual(areaPAB, 0) ||
        isEqual(areaPBC, 0) ||
        isEqual(areaPCA, 0)
        )
    {
        return false;
    }

    return isEqual(areaABC, areaPAB + areaPBC+ areaPCA);
}
