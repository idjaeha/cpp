/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jayi <jayi@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 08:50:32 by jayi              #+#    #+#             */
/*   Updated: 2022/03/16 20:18:13 by jayi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include "contact.hpp"
#define MAX_CONTACT 8

class phonebook
{
private:
	contact contacts[MAX_CONTACT];
	unsigned int nbContact;
	unsigned int cursor;
	void printInfo(std::string info);
public:
	phonebook(void);
	void search(unsigned int index, bool isFirst, bool isPrivate);
	void add(std::string firstName, std::string lastName, std::string nickName, std::string phoneNumber, std::string darkestSecret);
	unsigned int getNbContact(void);
};

#endif