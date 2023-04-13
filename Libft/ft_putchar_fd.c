/*
Function name:
    ft_putchar_fd
Prototype:
    void ft_putchar_fd(char c, int fd);
Parameters:
    c: The character to output.
    fd: The file descriptor on which to write.
Return value:
    None
External functs.
    write
Description:
    Outputs the character ’c’ to the given file
    descriptor.
*/
#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}