# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jayi <jayi@student.42seoul.kr>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/22 08:11:07 by jayi              #+#    #+#              #
#    Updated: 2022/03/22 11:52:55 by jayi             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=karenFilter
CPPFLAGS=-Wall -Wextra -Werror -std=c++98 
SRC=main.cpp\
	Karen.cpp

HEADER=Karen.hpp

OBJ= $(SRC:.cpp=.o)

all: ${NAME} ${HEADER}

${NAME}: ${OBJ}
	c++ ${CPPFLAGS} ${OBJ} -o ${NAME}

%.o: %.cpp
	c++ -c ${CPPFLAGS} $<

clean:
	rm -rf ${OBJ}

fclean: clean
	rm -rf ${NAME}
	rm -rf *.replace

re: fclean all

.PHONY: all clean fclean re