/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lballa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 16:09:00 by lballa            #+#    #+#             */
/*   Updated: 2023/04/15 16:09:01 by lballa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Function name
    ft_putstr_fd
Prototype
    void ft_putstr_fd(char *s, int fd);
Parameters 
    s: The string to output.
    fd: The file descriptor on which to write.
Return value 
    None
External functs. 
    write
Description 
    Outputs the string ’s’ to the given file
    descriptor.
*/
#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	write(fd, s, ft_strlen(s));
}
