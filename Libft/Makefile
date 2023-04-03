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
FILES = ft_isalpha.c \
		ft_isdigit.c

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) -c $(FILES)

clean:
	rm -f libft
	rm -f *.o

fclean: clean
	rm -f libft.a
	
re: fclean all
