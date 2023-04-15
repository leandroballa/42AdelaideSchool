/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lballa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 16:07:11 by lballa            #+#    #+#             */
/*   Updated: 2023/04/15 16:07:22 by lballa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Function name:
    ft_striteri
Prototype:
    void ft_striteri(char *s, void (*f)(unsigned int,
    char*));
Parameters:
    s: The string on which to iterate.
    f: The function to apply to each character.
Return value:
    None
External functs.
    None
Description:
    Applies the function ’f’ on each character of
    the string passed as argument, passing its index
    as first argument. Each character is passed by
    address to ’f’ to be modified if necessary
*/
#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i] != '\0')
	{
		f(i, s + i);
		i++;
	}
}
