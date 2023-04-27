/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lballa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 10:26:49 by lballa            #+#    #+#             */
/*   Updated: 2023/04/17 14:30:05 by lballa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
SYNOPSIS
     void *
     memchr(const void *s, int c, size_t n);
DESCRIPTION
     The memchr() function locates the first occurrence of c (converted to an 
	 unsigned char) in string s.
RETURN VALUES
     The memchr() function returns a pointer to the byte located, or NULL if no 
	 such byte exists within n bytes.
*/
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*str;
	size_t	i;

	i = 0;
	str = (char *)s;
	while (i < n)
	{
		if ((unsigned char)str[i] == (unsigned char)c)
			return ((char *)s + i);
		i++;
	}
	return (NULL);
}
