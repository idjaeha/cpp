/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehayi <jaehayi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 12:48:48 by jayi              #+#    #+#             */
/*   Updated: 2022/03/29 12:16:40 by jaehayi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include <iostream>

float getLength(float x1, float y1, float x2, float y2)
{
	return sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
}

bool isTriangle(float x1, float y1, float x2, float y2, float x3, float y3)
{
	float len1 = getLength(x1, y1, x2, y2);
	float len2 = getLength(x2, y2, x3, y3);
	float len3 = getLength(x3, y3, x1, y1);

    if (len1 >= len2 && len1 >= len3)
    {
        return len1 < len2 + len3;
    }
    else if (len2 >= len1 && len2 >= len3)
    {
        return len2 < len1 + len3;
    }
    else
    {
        return len3 < len1 + len2;
    }
}

int main( void )
{
	float x1 = 0;
	float y1 = 0;

	float x2 = 3;
	float y2 = 0;

	float x3 = 0;
	float y3 = 3;

	float targetX = 0.1;
	float targetY = 2.5;

	if (isTriangle(x1, y1, x2, y2, x3, y3) == false)
    {
        std::cerr << "주어진 세 점이 올바르지 않습니다." << std::endl;
        exit(1);
    }

	if (bsp(Point(x1, y1), Point(x2, y2), Point(x3, y3), Point(targetX, targetY)))
	{
		std::cout << "target은 삼각형 내부입니다." << std::endl;
	}
	else
	{
		std::cout << "target은 삼각형 외부입니다." << std::endl;
	}
	return 0;
}