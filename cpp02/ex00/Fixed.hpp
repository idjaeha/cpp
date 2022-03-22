/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jayi <jayi@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 12:53:15 by jayi              #+#    #+#             */
/*   Updated: 2022/03/22 13:06:36 by jayi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Fixed {
private:
	int rawBits;
public:
	Fixed(void);
	Fixed(const Fixed&);
	Fixed& operator=(const Fixed &ref);
	~Fixed();
	int	getRawBits(void) const;
	void setRawBits(int const raw);
};