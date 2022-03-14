NAME=tests
CPPFLAGS=-Wall -Wextra -Werror -std=c++98
SRC=tests.cpp\
	Account.cpp

OBJ= $(SRC:.cpp=.o)

${NAME}: ${OBJ}
	clang++ ${CPPFLAGS} ${OBJ} -o ${NAME}

%.o: %.cpp
	clang++ -c ${CPPFLAGS} $<

clean:
	rm -rf ${OBJ}

fclean: clean
	rm -rf ${NAME}

all: ${NAME}

re: fclean all

.PHONY: all clean fclean re