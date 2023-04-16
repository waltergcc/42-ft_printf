# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wcorrea- <wcorrea-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/14 01:34:02 by wcorrea-          #+#    #+#              #
#    Updated: 2023/04/16 11:07:39 by wcorrea-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

FT_IS = libft/ft_isprint.c libft/ft_isascii.c libft/ft_isalnum.c libft/ft_isdigit.c \
		libft/ft_isalpha.c

FT_TO = libft/ft_tolower.c libft/ft_toupper.c libft/ft_atoi.c libft/ft_itoa.c

FT_PUT = libft/ft_putchar_fd.c libft/ft_putstr_fd.c libft/ft_putendl_fd.c libft/ft_putnbr_fd.c

FT_MEM = libft/ft_bzero.c libft/ft_calloc.c libft/ft_memcpy.c libft/ft_memchr.c \
		libft/ft_memcmp.c libft/ft_memset.c libft/ft_memmove.c

FT_LST = libft/ft_lstnew.c libft/ft_lstadd_front.c libft/ft_lstadd_back.c \
		libft/ft_lstdelone.c libft/ft_lstclear.c libft/ft_lstiter.c \
		libft/ft_lstmap.c libft/ft_lstsize.c libft/ft_lstlast.c

FT_STR = libft/ft_split.c libft/ft_strchr.c libft/ft_strdup.c libft/ft_striteri.c \
		libft/ft_strjoin.c libft/ft_strlcat.c libft/ft_strlcpy.c libft/ft_strlen.c \
		libft/ft_strmapi.c libft/ft_strncmp.c libft/ft_strnstr.c libft/ft_strrchr.c \
		libft/ft_strtrim.c libft/ft_substr.c

FT_EXTRA = libft/ft_memalloc.c libft/ft_memccpy.c libft/ft_memdel.c \
		libft/ft_putchar.c libft/ft_putstr.c libft/ft_putnbr.c libft/ft_putendl.c \
		libft/ft_strclr.c libft/ft_strequ.c libft/ft_strncpy.c libft/ft_strcmp.c \
		libft/ft_striter.c libft/ft_strnequ.c libft/ft_strcpy.c libft/ft_strmap.c \
		libft/ft_strnew.c libft/ft_strcat.c libft/ft_strdel.c libft/ft_strncat.c \
		libft/ft_strstr.c

LIBFT = ${FT_IS} ${FT_TO} ${FT_PUT} ${FT_MEM} ${FT_LST} ${FT_STR} ${FT_EXTRA}

PRINFT = src/ft_printf.c src/ft_print_std.c src/ft_print_hex.c

SRC = ${PRINFT} ${LIBFT}

OBJS = ${SRC:.c=.o}

CC = gcc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror
INCLUDE = -I include

.c.o:
		${CC} ${CFLAGS} ${INCLUDE} -c $< -o ${<:.c=.o}

$(NAME): ${OBJS}
		ar rcs ${NAME} ${OBJS}

all:	${NAME}

clean:
		${RM} ${OBJS} ${BONUS_OBJS}

fclean: clean
		${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re