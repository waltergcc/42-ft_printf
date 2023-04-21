# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wcorrea- <wcorrea-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/14 01:34:02 by wcorrea-          #+#    #+#              #
#    Updated: 2023/04/21 16:55:14 by wcorrea-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

PRINTF_PATH = ../../printf

NAME = ${PRINTF_PATH}/libftprintf.a

TEST = main.c

OUT = ${TEST:.c=}

CC = gcc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror
INCLUDE = -I ${PRINTF_PATH}
MAKE = make -C

all:	fclean
		${MAKE} ${PRINTF_PATH} all
		${CC} ${CFLAGS} ${INCLUDE} ${TEST} ${NAME} -o ${OUT}
		${MAKE} ${PRINTF_PATH} fclean

fclean:
		${MAKE} ${PRINTF_PATH} fclean
		${RM} main
		
.PHONY: all clean fclean re
