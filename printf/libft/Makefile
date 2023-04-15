# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wcorrea- <wcorrea-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/14 01:34:02 by wcorrea-          #+#    #+#              #
#    Updated: 2023/04/15 19:25:37 by wcorrea-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FT_IS = ft_is/ft_isprint.c ft_is/ft_isascii.c ft_is/ft_isalnum.c ft_is/ft_isdigit.c \
		ft_is/ft_isalpha.c

FT_TO = ft_to/ft_tolower.c ft_to/ft_toupper.c ft_to/ft_atoi.c ft_to/ft_itoa.c

FT_PUT = ft_put/ft_putchar_fd.c ft_put/ft_putstr_fd.c ft_put/ft_putendl_fd.c ft_put/ft_putnbr_fd.c

FT_MEM = ft_mem/ft_bzero.c ft_mem/ft_calloc.c ft_mem/ft_memcpy.c ft_mem/ft_memchr.c \
		ft_mem/ft_memcmp.c ft_mem/ft_memset.c ft_mem/ft_memmove.c

FT_LST = ft_lst/ft_lstnew.c ft_lst/ft_lstadd_front.c ft_lst/ft_lstadd_back.c \
		ft_lst/ft_lstdelone.c ft_lst/ft_lstclear.c ft_lst/ft_lstiter.c \
		ft_lst/ft_lstmap.c ft_lst/ft_lstsize.c ft_lst/ft_lstlast.c

FT_STR = ft_str/ft_split.c ft_str/ft_strchr.c ft_str/ft_strdup.c ft_str/ft_striteri.c \
		ft_str/ft_strjoin.c ft_str/ft_strlcat.c ft_str/ft_strlcpy.c ft_str/ft_strlen.c \
		ft_str/ft_strmapi.c ft_str/ft_strncmp.c ft_str/ft_strnstr.c ft_str/ft_strrchr.c \
		ft_str/ft_strtrim.c ft_str/ft_substr.c

FT_AF = ft_af/ft_memalloc.c ft_af/ft_memccpy.c ft_af/ft_memdel.c \
		ft_af/ft_putchar.c ft_af/ft_putstr.c ft_af/ft_putnbr.c ft_af/ft_putendl.c \
		ft_af/ft_strclr.c ft_af/ft_strequ.c ft_af/ft_strncpy.c ft_af/ft_strcmp.c \
		ft_af/ft_striter.c ft_af/ft_strnequ.c ft_af/ft_strcpy.c ft_af/ft_strmap.c \
		ft_af/ft_strnew.c ft_af/ft_strcat.c ft_af/ft_strdel.c ft_af/ft_strncat.c \
		ft_af/ft_strstr.c

SRC = ${FT_IS} ${FT_TO} ${FT_PUT} ${FT_MEM} ${FT_LST} ${FT_STR} ${FT_AF}

OBJS = ${SRC:.c=.o}

CC = gcc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror
INCLUDE = -I ../include

.c.o:
		${CC} ${CFLAGS} ${INCLUDE} -c $< -o ${<:.c=.o}

$(NAME): ${OBJS}
		ar rcs ${NAME} ${OBJS}

all:	${NAME}

clean:
		${RM} ${OBJS}

fclean: clean
		${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re