/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehayi <jaehayi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 12:53:15 by jayi              #+#    #+#             */
/*   Updated: 2022/03/29 12:17:16 by jaehayi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef FIXED_H
#define FIXED_H
class Fixed {
private:
	int fixedPointNumber;
	static const int fractionalBits = 8;
public:
	Fixed(void);
	Fixed(const Fixed&);
	Fixed& operator=(const Fixed &ref);
	~Fixed();
	int	getRawBits(void) const;
	void setRawBits(int const raw);
};

#endif