#include "phonebook.hpp"
#include "selector.hpp"

int	main(void)
{
	phonebook pb;
	selector sl;

	pb.add("1", "2", "3", "4", "12345678901");
	pb.search(0);
	sl.run();
}