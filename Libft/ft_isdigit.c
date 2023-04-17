/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lballa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 14:51:30 by lballa            #+#    #+#             */
/*   Updated: 2023/04/17 14:02:06 by lballa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
SYNOPSIS
     int
     isdigit(int c);
DESCRIPTION
     The isdigit() function tests for a decimal digit character.  Regardless of 
	 locale, this includes the following characters only:

     ``0''         ``1''         ``2''         ``3''         ``4''
     ``5''         ``6''         ``7''         ``8''         ``9''

     The isnumber() function behaves similarly to isdigit(), but may recognize 
	 additional characters, depending on the current locale setting.

     The value of the argument must be representable as an unsigned char or the 
	 value of EOF.

RETURN VALUES
     The isdigit() and isnumber() functions return zero if the character tests 
	 false and return non-zero if the character tests true.
*/
int	ft_isdigit(int ar)
{
	if (ar >= 48 && ar <= 57)
		return (1);
	else
		return (0);
}
/*
#include <stdio.h>
int main (void)
{
	int a;

	a = '1';
	printf("Return %d", ft_isdigit(a));
}
*/
