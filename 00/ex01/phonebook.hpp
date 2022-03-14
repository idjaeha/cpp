/*
** phonebook
** 1. 입력값 받기 (ADD, SEARCH, EXIT)
** 2. 입력값에 대한 수행
** 3. 
** 
*/

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