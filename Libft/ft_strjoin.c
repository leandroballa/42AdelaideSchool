/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lballa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 16:06:59 by lballa            #+#    #+#             */
/*   Updated: 2023/04/15 16:07:00 by lballa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Function name:
    ft_strjoin
Prototype:
    char *ft_strjoin(char const *s1, char const *s2);
Parameters:
    s1: The prefix string.
    s2: The suffix string.
Return value:
    The new string.
    NULL if the allocation fails.
External functs:
    malloc
Description:
    Allocates (with malloc(3)) and returns a new
    string, which is the result of the concatenation
    of ’s1’ and ’s2’.
*/
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	i;
	size_t	j;

	str = (char *)malloc(
			sizeof(*s1) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!str)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i])
	{
		str[j++] = s1[i];
		i++;
	}
	i = 0;
	while (s2[i])
	{
		str[j++] = s2[i];
		i++;
	}
	str[j] = 0;
	return (str);
}
