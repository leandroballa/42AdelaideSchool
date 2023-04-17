/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lballa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 10:33:24 by lballa            #+#    #+#             */
/*   Updated: 2023/04/17 14:44:29 by lballa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
PARAMETERS
	const char *s
	int c
DESCRIPTION
     The strchr() function locates the first occurrence of c 
	 (converted to a char) in the string pointed to by s.  The terminating 
	 null character is considered to be part of the string; therefore if c is 
	 `\0', the functions locate the terminating `\0'.
     The strrchr() function is identical to strchr(), except it locates the 
	 last occurrence of c.
RETURN VALUES
     The functions strchr() and strrchr() return a pointer to the located 
	 character, or NULL if the character does not appear in the string.
*/
#include "libft.h"

char	*ft_strchr(const char *s, int i)
{
	while (*s)
	{
		if (*s == i)
			return ((char *)s);
		s++;
	}
	if (i == '\0')
		return ((char *)s);
	return (0);
}
/*
#include <stdio.h>
int	main()
{
	char	*ret;
	char	*ret2;

	ret = ft_strchr("teste", 'e' + 256);
	printf("%s", ret);
	ret2 = ft_strchr("teste", 1024);
	printf("\n%s", ret2);
}
*/
