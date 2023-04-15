# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wcorrea- <wcorrea-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/14 01:34:02 by wcorrea-          #+#    #+#              #
#    Updated: 2023/04/15 17:56:24 by wcorrea-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

PART1 = src/ft_printf.c

PART2 = 

BONUS = 

SRC = ${PART1} ${PART2}

OBJS = ${SRC:.c=.o}
BONUS_OBJS = ${BONUS:.c=.o}

CC = gcc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror
INCLUDE = -I include

.c.o:
		${CC} ${CFLAGS} ${INCLUDE} -c $< -o ${<:.c=.o}

$(NAME): ${OBJS}
		ar rcs ${NAME} ${OBJS}

all:	${NAME}

bonus:	${OBJS} ${BONUS_OBJS}
		ar rcs ${NAME} ${OBJS} ${BONUS_OBJS}

clean:
		${RM} ${OBJS} ${BONUS_OBJS}

fclean: clean
		${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re