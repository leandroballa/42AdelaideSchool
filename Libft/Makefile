# -*- Makefile -*-

CC = gcc
CFLAGS = -Wall -Wextra -Werror

TARGER = libft

all: $(TARGET)

$(TARGET): $(TARGET).c
  $(CC) $(CFLAGS) -o $(TARGET) $(TARGET).c

clean:
  $(RM) $(TARGET)

fclean: clean
  rm -f $(NAME)

re: fclean all
