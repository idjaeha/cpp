NAME=Phonebook
CPPFLAGS=-Wall -Wextra -Werror
SRC=Phonebook.cpp\
	Contact.cpp\
	main.cpp

OBJ= $(SRC:.c=.o)

${NAME}: ${OBJ}
	clang++ ${CPPFLAGS} ${OBJ} -o ${NAME}

%.o: %.c
	clang++ -c ${CPPFLAGS} $<

clean:
	rm -rf ${OBJ}

fclean: clean
	rm -rf ${NAME}

all: ${NAME}

re: fclean all

.PHONY: all clean fclean re