NAME=phonebook
CPPFLAGS=-Wall -Wextra -Werror
SRC=phonebook.cpp\
	contact.cpp\
	selector.cpp\
	main.cpp

OBJ= $(SRC:.cpp=.o)

${NAME}: ${OBJ}
	clang++ -std=c++98 ${CPPFLAGS} ${OBJ} -o ${NAME}

%.o: %.cpp
	clang++ -std=c++98 -c ${CPPFLAGS} $<

clean:
	rm -rf ${OBJ}

fclean: clean
	rm -rf ${NAME}

all: ${NAME}

re: fclean all

.PHONY: all clean fclean re