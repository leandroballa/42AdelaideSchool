/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lballa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 14:18:00 by lballa            #+#    #+#             */
/*   Updated: 2023/04/17 14:10:15 by lballa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
SYNOPSIS
     int
     strncmp(const char *s1, const char *s2, size_t n);
DESCRIPTION
     The strncmp() function compares not more than n characters.  
	 Because strncmp() is designed for comparing strings rather than binary 
	 data, characters that appear after a `\0' character are not compared.
RETURN VALUES
     The strcmp() and strncmp() functions return an integer greater than, 
	 equal to, or less than 0, according as the string s1 is greater than, 
	 equal to, or less than the string s2.  
	 The comparison is done using unsigned characters, so that `\200' is greater
	 than `\0'.
*/
#include "libft.h"

int	ft_strncmp(const char *s1, char *s2, size_t n)
{
	while (*s1 != '\0' && *s1 == *s2 && n > 0)
	{
		s1++;
		s2++;
		n--;
	}
	if (n == 0)
		return (0);
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}
