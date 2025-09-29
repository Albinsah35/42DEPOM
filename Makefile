# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cikuntay <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/09/29 08:46:50 by cikuntay          #+#    #+#              #
#    Updated: 2025/09/29 08:56:07 by cikuntay         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = cc
CFLAGS = -Wextra -Wall -Werror
AR = ar rcs
SRC = ft_memset.c ft_memcpy.c ft_memmove.c ft_bzero.c ft_memchr.c ft_strchr.c\
      ft_memcmp.c ft_calloc.c ft_strdup.c ft_strlen.c ft_strrchr.c\
      ft_strnstr.c ft_strncmp.c ft_strlcat.c


OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
