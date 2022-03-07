#include "Phonebook.hpp"

void Phonebook::add(std::string firstName, std::string lastName, std::string nickName, std::string phoneNumber, std::string darkestSecret)
{
	if (this->count >= 8)
	{
		return ;
	}
	contacts[this->count].setFirstName(firstName);
	contacts[this->count].setLastName(lastName);
	contacts[this->count].setNickName(nickName);
	contacts[this->count].setPhoneNumber(phoneNumber);
	contacts[this->count].setDarkestSecret(darkestSecret);
	this->count++;
}