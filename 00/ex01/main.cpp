#include "Phonebook.hpp"

int	main(void)
{
	Phonebook phonebook;

	phonebook.add("1", "2", "3", "4", "12345678901");
	phonebook.search(0);
}