# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jayi <jayi@student.42seoul.kr>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/22 08:11:07 by jayi              #+#    #+#              #
#    Updated: 2022/03/22 09:50:18 by jayi             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=replace
CPPFLAGS=-Wall -Wextra -Werror -std=c++98 
SRC=main.cpp

OBJ= $(SRC:.cpp=.o)

all: ${NAME}

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