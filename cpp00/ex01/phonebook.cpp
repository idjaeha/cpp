/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jayi <jayi@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 08:50:30 by jayi              #+#    #+#             */
/*   Updated: 2022/03/17 08:23:32 by jayi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include <iostream>
#include <iomanip>

void phonebook::add(std::string firstName, std::string lastName, std::string nickName, std::string phoneNumber, std::string darkestSecret)
{
	this->cursor = this->nbContact % MAX_CONTACT;

	contacts[this->nbContact].setFirstName(firstName);
	contacts[this->nbContact].setLastName(lastName);
	contacts[this->nbContact].setNickName(nickName);
	contacts[this->nbContact].setPhoneNumber(phoneNumber);
	contacts[this->nbContact].setDarkestSecret(darkestSecret);
	this->nbContact++;
}

void phonebook::search(unsigned int index, bool isFirst, bool isPrivate)
{
	if (index >= this->nbContact)
	{
		std::cout << "인덱스가 범위를 초과했습니다." << std::endl;
		return;
	}

	if (isFirst == true)
	{
		std::cout << "|";
		std::cout << std::setw(10) << "FIRST_NAME";
		std::cout << "|";
		std::cout << std::setw(10) << "LAST_NAME";
		std::cout << "|";
		std::cout << std::setw(10) << "NICK_NAME";
		std::cout << "|";
		std::cout << std::setw(10) << "PHONE";
		if (isPrivate == true)
		{
			std::cout << "|";
			std::cout << std::setw(10) << "SECRET";
		}
		std::cout << "|" << std::endl;
	}

	std::cout << "|";
	this->printInfo(this->contacts[index].getFirstName());
	std::cout << "|";
	this->printInfo(this->contacts[index].getLastName());
	std::cout << "|";
	this->printInfo(this->contacts[index].getNickName());
	std::cout << "|";
	this->printInfo(this->contacts[index].getPhoneNumber());
	if (isPrivate == true)
	{
		std::cout << "|";
		this->printInfo(this->contacts[index].getDarkestSecret());
	}
	std::cout << "|" << std::endl;
}

void phonebook::printInfo(std::string info)
{
	std::string output = info;

	if (info.length() > 10)
	{
		output = info.substr(0, 9) + ".";
	}
	std::cout << std::setw(10) << output;
}

phonebook::phonebook(void) : nbContact(0), cursor(0)
{
};

unsigned int phonebook::getNbContact(void)
{
	return this->nbContact;
}