/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lballa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 10:36:37 by lballa            #+#    #+#             */
/*   Updated: 2023/04/17 14:08:00 by lballa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
SYNOPSIS
	char *
    strnstr(const char *haystack, const char *needle, size_t len);
DESCRIPTION
	The strnstr() function locates the first occurrence of the null-terminated 
	string needle in the string haystack, where not more than len characters
    are searched.  Characters that appear after a `\0' character are not 
	searched.  Since the strnstr() function is a FreeBSD specific API, it should
    only be used when portability is not a concern.
RETURN VALUES
     If needle is an empty string, haystack is returned; if needle occurs 
	 nowhere in haystack, NULL is returned; otherwise a pointer to the first 
	 character of the first occurrence of needle is returned.
*/
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (needle == NULL || needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[i] != '\0' && i < n)
	{
		if (haystack[i] == needle[j])
		{
			while (haystack[i + j] == needle[j] && i + j < n)
			{
				if (needle[j + 1] == '\0')
					return ((char *)haystack + i);
				j++;
			}
			j = 0;
		}	
		i++;
	}
	return (NULL);
}
