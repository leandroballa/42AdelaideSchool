/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lballa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 15:57:46 by lballa            #+#    #+#             */
/*   Updated: 2023/04/17 14:24:47 by lballa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
SYNOPSIS
     void *
     memset(void *b, int c, size_t len);
DESCRIPTION
     The memset() function writes len bytes of value c (converted to an unsigned
	 char) to the string b.
RETURN VALUES
     The memset() function returns its first argument.
*/
#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	char	*p;

	p = (char *)str;
	while (n > 0)
	{
		p[n -1] = c;
		n--;
	}
	return (str);
}
