/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jayi <jayi@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 08:50:32 by jayi              #+#    #+#             */
/*   Updated: 2022/03/14 09:17:00 by jayi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include "contact.hpp"
#define MAX_COUNT 8

class phonebook
{
private:
	contact contacts[MAX_COUNT];
	unsigned int count;
	void printInfo(std::string info);
public:
	phonebook() : count(0)
	{
	};
	void search(unsigned int index);
	void add(std::string firstName, std::string lastName, std::string nickName, std::string phoneNumber, std::string darkestSecret);
};

#endif