# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wcorrea- <wcorrea-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/14 01:34:02 by wcorrea-          #+#    #+#              #
<<<<<<< HEAD
#    Updated: 2023/04/22 22:52:57 by wcorrea-         ###   ########.fr        #
=======
#    Updated: 2023/04/21 16:55:14 by wcorrea-         ###   ########.fr        #
>>>>>>> origin/main
#                                                                              #
# **************************************************************************** #

PRINTF_PATH = ../../printf

NAME = ${PRINTF_PATH}/libftprintf.a


CC = gcc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror
INCLUDE = -I ${PRINTF_PATH}
MAKE = make -C

m:		clean
		${MAKE} ${PRINTF_PATH} all
		${CC} ${CFLAGS} ${INCLUDE} mandatory.c ${NAME} -o m

b:		clean
		${MAKE} ${PRINTF_PATH} all
		${CC} ${CFLAGS} ${INCLUDE} mandatory.c ${NAME} -o m
		${CC} ${CFLAGS} ${INCLUDE} bonus.c ${NAME} -o b

clean:
		${RM} b m

fclean: clean
		${MAKE} ${PRINTF_PATH} fclean
		
.PHONY: all clean fclean re
