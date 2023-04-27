# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lballa <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/29 14:25:44 by lballa            #+#    #+#              #
#    Updated: 2023/04/04 15:39:19 by lballa           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# -*- Makefile -*-

NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
FILES = ft_isalpha\
		ft_isdigit\
		ft_isalnum\
		ft_isascii\
		ft_isprint\
		ft_strlen\
		ft_memset\
		ft_bzero\
		ft_memcpy\
		ft_memmove\
		ft_strlcpy\
		ft_strlcat\
		ft_tolower\
		ft_toupper\
		ft_strchr\
		ft_strrchr\
		ft_strncmp\
		ft_memchr\
		ft_memcmp\
		ft_strnstr\
		ft_atoi\
		ft_calloc\
		ft_strdup\
		ft_substr\
		ft_strjoin\
		ft_strtrim\
		*ft_split\
		ft_itoa\
		ft_strmapi\
		ft_striteri\
		ft_putchar_fd\
		ft_putstr_fd\
		ft_putendl_fd\
		ft_putnbr_fd
CFILES = $(FILES:%=%.c)
OFILES	= $(FILES:%=%.o)

$(NAME):
	$(CC) $(CFLAGS) -c $(CFILES)
	ar -rc $(NAME) $(OFILES)

all: $(NAME)

clean:
	rm -f $(NAME)
	rm -f *.o

fclean: clean
	rm -f $(NAME)
	
re: fclean all

.PHONY: all, clean, fclean, re
