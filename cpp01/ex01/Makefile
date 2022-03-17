# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jayi <jayi@student.42seoul.kr>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/14 10:00:12 by jayi              #+#    #+#              #
#    Updated: 2022/03/17 11:11:32 by jayi             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=Zombie
CPPFLAGS=-Wall -Wextra -Werror -std=c++98 
SRC=main.cpp\
	Zombie.cpp\
	zombieHorde.cpp

HEADER=	Zombie.hpp

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