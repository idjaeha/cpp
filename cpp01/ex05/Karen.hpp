/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jayi <jayi@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 09:59:57 by jayi              #+#    #+#             */
/*   Updated: 2022/03/22 10:17:57 by jayi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Karen {
private:
	void debug( void );
	void info( void );
	void warning( void );
	void error( void );
	void (*func[4])();
public:
	void complain( std::string level );
	Karen(void);
};