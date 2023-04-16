# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wcorrea- <wcorrea-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/14 01:34:02 by wcorrea-          #+#    #+#              #
#    Updated: 2023/04/16 11:15:17 by wcorrea-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ../printf/libftprintf.a

TEST = main.c

OUT = ${TEST:.c=}

CC = gcc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror
INCLUDE = -I ../printf/include
MAKE = make -C

PRINTF_MAKEFILE = ../printf

all:	fclean all
		${MAKE} ${PRINTF_MAKEFILE} all
		${CC} ${CFLAGS} ${INCLUDE} ${TEST} ${NAME} -o ${OUT}
		${MAKE} ${PRINTF_MAKEFILE} fclean

fclean:
		${MAKE} ${PRINTF_MAKEFILE} fclean
		${RM} main
		
.PHONY: all clean fclean re