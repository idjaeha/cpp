/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jayi <jayi@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 08:50:32 by jayi              #+#    #+#             */
/*   Updated: 2022/03/14 08:55:27 by jayi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
#define PHONEBOOK_H
#include "contact.hpp"

class phonebook
{
private:
	contact contacts[8];
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