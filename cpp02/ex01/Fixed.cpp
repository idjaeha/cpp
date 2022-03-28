/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehayi <jaehayi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 13:03:48 by jayi              #+#    #+#             */
/*   Updated: 2022/03/28 09:52:15 by jaehayi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : fixedPointNumber(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &target)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = target;
}

Fixed::Fixed(int const number) : fixedPointNumber(number << fractionalBits)
{
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(float number) : fixedPointNumber((int)roundf(number * (1 << fractionalBits)))
{
	std::cout << "Float constructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed &ref)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &ref)
	{
		this->fixedPointNumber = ref.getRawBits();
	}
	return *this;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return this->fixedPointNumber;
}

void Fixed::setRawBits(int const raw)
{
	this->fixedPointNumber = raw;
}

float Fixed::toFloat(void) const
{
	return (float)this->fixedPointNumber / (1 << fractionalBits);
}

int Fixed::toInt(void) const
{
	return (int)roundf((float)this->fixedPointNumber / (1 << fractionalBits));
}

std::ostream &operator<<(std::ostream &ostream, const Fixed &fixed)
{
	ostream << fixed.toFloat();
	return ostream;
}