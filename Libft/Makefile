# -*- Makefile -*-

NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror

TARGER = libft

all: $(TARGET)

$(TARGET): $(TARGET).c
  $(CC) $(CFLAGS) -o $(TARGET) $(TARGET).c

clean:
  rm -f *.o

fclean: clean
  rm -f $(NAME)

re: fclean all
