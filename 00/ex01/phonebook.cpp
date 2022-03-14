/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jayi <jayi@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 08:50:30 by jayi              #+#    #+#             */
/*   Updated: 2022/03/14 10:55:52 by jayi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include <iostream>
#include <iomanip>

void phonebook::add(std::string firstName, std::string lastName, std::string nickName, std::string phoneNumber, std::string darkestSecret)
{
	this->count = this->count % MAX_COUNT;

	contacts[this->count].setFirstName(firstName);
	contacts[this->count].setLastName(lastName);
	contacts[this->count].setNickName(nickName);
	contacts[this->count].setPhoneNumber(phoneNumber);
	contacts[this->count].setDarkestSecret(darkestSecret);
	this->count++;
}

void phonebook::search(unsigned int index)
{
	if (index >= this->count)
	{
		std::cout << "잘못된 인덱스입니다." << std::endl;
		return;
	}

	std::cout << "|";
	std::cout << std::setw(10) << "FIRST_NAME";
	std::cout << "|";
	std::cout << std::setw(10) << "LAST_NAME";
	std::cout << "|";
	std::cout << std::setw(10) << "NICK_NAME";
	std::cout << "|";
	std::cout << std::setw(10) << "PHONE";
	std::cout << "|";
	std::cout << std::setw(10) << "SECRET";
	std::cout << "|" << std::endl;

	std::cout << "|";
	this->printInfo(this->contacts[index].getFirstName());
	std::cout << "|";
	this->printInfo(this->contacts[index].getLastName());
	std::cout << "|";
	this->printInfo(this->contacts[index].getNickName());
	std::cout << "|";
	this->printInfo(this->contacts[index].getPhoneNumber());
	std::cout << "|";
	this->printInfo(this->contacts[index].getDarkestSecret());
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

phonebook::phonebook(void) : count(0)
	{
	};