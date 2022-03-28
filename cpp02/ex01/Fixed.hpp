/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehayi <jaehayi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 12:53:15 by jayi              #+#    #+#             */
/*   Updated: 2022/03/28 10:41:12 by jaehayi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
#define FIXED_H

#include <iostream>
#include <cmath>

class Fixed {
private:
	int fixedPointNumber;
	static const int fractionalBits = 8;
public:
	Fixed(void);
	Fixed(int const);
	Fixed(float);
	Fixed(const Fixed&);
	Fixed& operator=(const Fixed &ref);
	~Fixed();
	int	getRawBits(void) const;
	void setRawBits(int const raw);
	float	toFloat(void) const;
	int	toInt(void) const;
};

std::ostream &operator<<(std::ostream &ostream, const Fixed &fixed);

#endif