#include "Phonebook.hpp"
#include <iostream>
#include <iomanip>

void Phonebook::add(std::string firstName, std::string lastName, std::string nickName, std::string phoneNumber, std::string darkestSecret)
{
	if (this->count >= 8)
	{
		return;
	}
	contacts[this->count].setFirstName(firstName);
	contacts[this->count].setLastName(lastName);
	contacts[this->count].setNickName(nickName);
	contacts[this->count].setPhoneNumber(phoneNumber);
	contacts[this->count].setDarkestSecret(darkestSecret);
	this->count++;
}

void Phonebook::search(unsigned int index)
{
	if (index >= this->count)
	{
		// return;
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
}