/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lballa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 16:02:31 by lballa            #+#    #+#             */
/*   Updated: 2023/05/12 15:10:28 by lballa           ###   ########.fr       */
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
	char	*sub;
	size_t	i;
	size_t	k;
	size_t	slen;

	slen = ft_strlen(s);
	if (start > slen)
		return (ft_strdup(""));
	if (len > slen - start)
		len = slen - start;
	sub = (char *)malloc(sizeof(*s) * (len + 1));
	if (!s || !sub)
		return (NULL);
	i = 0;
	k = start;
	while (k < slen && i < len)
	{
		sub[i] = s[k];
		i++;
		k++;
	}
	sub[i] = '\0';
	return (sub);
}
