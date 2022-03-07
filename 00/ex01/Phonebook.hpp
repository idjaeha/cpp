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
	Contact::Contact contacts[8];
	int count;
public:
	Phonebook() : count(0)
	{
	};
	void search();
	void add();
};
