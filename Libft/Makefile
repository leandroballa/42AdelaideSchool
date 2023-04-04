# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lballa <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/29 14:25:44 by lballa            #+#    #+#              #
#    Updated: 2023/04/03 12:42:34 by lballa           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# -*- Makefile -*-

NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
FILES = ft_isalpha \
        ft_isdigit
CFILES = $(FILES:%=%.c)
OFILES  = $(FILES:%=%.o)

$(NAME):
    $(CC) $(CFLAGS) -c $(CFILES)
    ar -rc $(NAME) $(OFILES)

all: $(NAME)

clean:
    rm -f libft
    rm -f *.o

fclean: clean
    rm -f libft.a

re: fclean all

.PHONY: all, clean, fclean, re
