# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jaehayi <jaehayi@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/14 10:00:12 by jayi              #+#    #+#              #
#    Updated: 2022/04/07 08:14:42 by jaehayi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=a.out
CPPFLAGS=-Wall -Wextra -Werror -std=c++98 
SRC=	main.cpp\
		ClapTrap.cpp\
		ScavTrap.cpp

HEADER=	ClapTrap.hpp\
		ScavTrap.hpp

OBJ= $(SRC:.cpp=.o)

all: ${NAME} ${HEADER}

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