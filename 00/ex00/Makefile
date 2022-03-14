# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jayi <jayi@student.42seoul.kr>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/14 10:00:20 by jayi              #+#    #+#              #
#    Updated: 2022/03/14 10:10:29 by jayi             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=megaphone
CPPFLAGS=-Wall -Wextra -Werror -std=c++98 
SRC=megaphone.cpp
OBJ=megaphone.o

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