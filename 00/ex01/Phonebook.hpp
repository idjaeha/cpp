/*
** Phonebook
** 1. 입력값 받기 (ADD, SEARCH, EXIT)
** 2. 입력값에 대한 수행
** 3. 
** 
*/

#include "Contact.hpp"

class Phonebook
{
private:
	Contact contacts[8];
	unsigned int count;
	void printInfo(std::string info);
public:
	Phonebook() : count(0)
	{
	};
	void search(unsigned int index);
	void add(std::string firstName, std::string lastName, std::string nickName, std::string phoneNumber, std::string darkestSecret);
};
