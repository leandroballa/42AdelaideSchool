# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lballa <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/29 14:25:44 by lballa            #+#    #+#              #
#    Updated: 2023/03/29 15:20:17 by lballa           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# -*- Makefile -*-

NAME = libft.a
TARGER = libft
CC = gcc
CFLAGS = -Wall -Wextra -Werror
FILES = isalpha.c \
		iasdigit.c \
		isalnum.c \
		isascii.c \
		isprint.c \
		strlen.c \
		memset.c \
		bzero.c \
		memcpy.c \
		memmove.c \
		strlcpy.c \
		strlcat.c \
		toupper.c \
		tolower.c \
		strchr.c \
		strrchr.c \
		strncmp.c \
		memchr.c \
		memcmp.c \
		strnstr.c \
		atoi.c \
		

all: $(TARGET)

$(TARGET): $(TARGET).c
	$(CC) $(CFLAGS) -o $(TARGET) $(FILES)

clean:
	rm -f $(TARGET)
	rm -f *.o

fclean: clean
 	rm -f $(NAME)

re: fclean all
