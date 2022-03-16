/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   selector.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jayi <jayi@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 08:21:34 by jayi              #+#    #+#             */
/*   Updated: 2022/03/16 15:16:47 by jayi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SELECTOR_H
#define SELECTOR_H

#include "phonebook.hpp"

#define COMMAND_ADD "ADD"
#define COMMAND_SEARCH "SEARCH"
#define COMMAND_EXIT "EXIT"

class selector {
public:
	void run(phonebook *pb);
};

#endif