/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lballa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 10:37:34 by lballa            #+#    #+#             */
/*   Updated: 2023/04/17 14:37:12 by lballa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
SYNOPSIS
     char *
     strrchr(const char *s, int c);

DESCRIPTION
     The strchr() function locates the first occurrence of c (converted to a char) in the string pointed to by s.  The terminating null character is con-
     sidered to be part of the string; therefore if c is `\0', the functions locate the terminating `\0'.

     The strrchr() function is identical to strchr(), except it locates the last occurrence of c.

RETURN VALUES
     The functions strchr() and strrchr() return a pointer to the located character, or NULL if the character does not appear in the string.
*/
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)(s + i));
		i--;
	}
	return (NULL);
}
