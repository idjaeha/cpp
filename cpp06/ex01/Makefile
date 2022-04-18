# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jayi <jayi@student.42seoul.kr>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/14 10:00:12 by jayi              #+#    #+#              #
#    Updated: 2022/04/19 01:32:40 by jayi             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=a.out
CPPFLAGS=-Wall -Wextra -Werror -std=c++98 
SRC=main.cpp\
	Data.cpp

HEADER=	Data.hpp

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