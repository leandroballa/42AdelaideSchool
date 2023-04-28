/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lballa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 16:02:31 by lballa            #+#    #+#             */
/*   Updated: 2023/04/27 16:49:26 by lballa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Function name:
    ft_substr
Prototype: 
    char *ft_substr(char const *s, unsigned int start,size_t len);
Parameters:
    s: The string from which to create the substring.
    start: The start index of the substring in the string ’s’.
    len: The maximum length of the substring.
Return value:
    The substring.
    NULL if the allocation fails.
External functs: 
    malloc
Description:
    Allocates (with malloc(3)) and returns a substring
    from the string ’s’.
    The substring begins at index ’start’ and is of
    maximum size ’len’.
*/
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;
	size_t	l;

	l = ft_strlen(s);
	if (start > l)
		return (ft_strdup(""));
	if (l == '0')
	{
		return (ft_strdup(""));
	}
	else
	{
		str = malloc(sizeof(char) * (len + 1));
		if (str == NULL)
			return (0);
		i = 0;
		while (++i - 1 < len)
			*(str + i - 1) = *(s + start + i - 1);
		*(str + i - 1) = '\0';
		return (str);
	}
}
