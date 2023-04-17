/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lballa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 16:02:31 by lballa            #+#    #+#             */
/*   Updated: 2023/04/17 15:20:25 by lballa           ###   ########.fr       */
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
	size_t	i;
	size_t	j;
	char	*str;

	str = (char *)malloc(sizeof(*s) * (len + 1));
	if (!str)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (i >= start && j < len)
		{
			str[j] = s[i];
			j++;
		}
		i++;
	}
	str[j] = 0;
	return (str);
}
/*char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*dst;
	size_t	i;

	if (s == NULL)
		return (NULL);
	if (ft_strlen(s) < start)
	{
		if ((dst = malloc(sizeof(char))) == NULL)
			return (NULL);
		dst[0] = '\0';
		return (dst);
	}
	else
	{
		if (start + len > ft_strlen(s))
			len = ft_strlen(s) - start;
		if ((dst = malloc(sizeof(char) * (len + 1))) == NULL)
			return (NULL);
		i = 0;
		while (++i - 1 < len)
			*(dst + i - 1) = *(s + start + i - 1);
		*(dst + i - 1) = '\0';
		return (dst);
	}
}*/
