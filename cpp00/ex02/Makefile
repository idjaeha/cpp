NAME=tests
CPPFLAGS=-Wall -Wextra -Werror -std=c++98
SRC=tests.cpp\
	Account.cpp

HEADER=Account.hpp

OBJ= $(SRC:.cpp=.o)

all: ${NAME}

${NAME}: ${OBJ} ${HEADER}
	c++ ${CPPFLAGS} ${OBJ} -o ${NAME}

%.o: %.cpp
	c++ -c ${CPPFLAGS} $<

clean:
	rm -rf ${OBJ}

fclean: clean
	rm -rf ${NAME}

re: fclean all

.PHONY: all clean fclean re