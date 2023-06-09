/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lballa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 16:09:15 by lballa            #+#    #+#             */
/*   Updated: 2023/04/17 14:39:46 by lballa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Function name 
    ft_putnbr_fd
Prototype 
    void ft_putnbr_fd(int n, int fd);
Parameters 
    n: The integer to output.
    fd: The file descriptor on which to write.
Return value 
    None
External functs. 
    write
Description 
    Outputs the integer ’n’ to the given file
    descriptor.
*/
#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
		ft_putstr_fd("-2147483648", fd);
	else if (n < 0)
	{
		ft_putchar_fd('-', fd);
		ft_putnbr_fd(-n, fd);
	}
	else if (n >= 10)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putchar_fd(n % 10 + '0', fd);
	}
	else
		ft_putchar_fd(n + '0', fd);
}
