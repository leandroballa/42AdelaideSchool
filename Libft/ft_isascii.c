/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lballa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 15:14:14 by lballa            #+#    #+#             */
/*   Updated: 2023/04/17 14:03:48 by lballa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
SYNOPSIS
     int
     isascii(int c);
DESCRIPTION
     The isascii() function tests for an ASCII character, which is any character
	 between 0 and octal 0177 inclusive.
*/
int	ft_isascii(int arg)
{
	if (arg >= 0 && arg <= 127)
		return (1);
	else
		return (0);
}
/*
#include <stdio.h>
int main(void)
{
	int c;

	c = ' ';
	printf("Return %d", ft_isascii(c));
}
*/
