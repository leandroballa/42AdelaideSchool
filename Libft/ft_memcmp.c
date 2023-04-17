/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lballa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 10:30:34 by lballa            #+#    #+#             */
/*   Updated: 2023/04/17 14:29:14 by lballa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
SYNOPSIS
     int
     memcmp(const void *s1, const void *s2, size_t n);
DESCRIPTION
     The memcmp() function compares byte string s1 against byte string s2.  
	 Both strings are assumed to be n bytes long.
RETURN VALUES
     The memcmp() function returns zero if the two strings are identical, 
	 otherwise returns the difference between the first two differing bytes 
	 (treated as unsigned char values, so that `\200' is greater than `\0', for 
	 example).  Zero-length strings are always identical.  This behavior is not 
	 required by C and portable code should only depend on the sign of the 
	 returned value.
*/
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char	*str1;
	char	*str2;
	size_t	i;

	i = 0;
	str1 = (char *)s1;
	str2 = (char *)s2;
	while (i < n)
	{
		if (str1[i] != str2[i])
			return ((unsigned char)str1[i] - (unsigned char)str2[i]);
		i++;
	}
	return (0);
}
