# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jayi <jayi@student.42seoul.kr>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/14 10:00:12 by jayi              #+#    #+#              #
#    Updated: 2022/03/14 10:10:22 by jayi             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=phonebook
CPPFLAGS=-Wall -Wextra -Werror -std=c++98 
SRC=phonebook.cpp\
	contact.cpp\
	selector.cpp\
	main.cpp

OBJ= $(SRC:.cpp=.o)

${NAME}: ${OBJ}
	clang++ ${CPPFLAGS} ${OBJ} -o ${NAME}

%.o: %.cpp
	clang++-c ${CPPFLAGS} $<

clean:
	rm -rf ${OBJ}

fclean: clean
	rm -rf ${NAME}

all: ${NAME}

re: fclean all

.PHONY: all clean fclean re