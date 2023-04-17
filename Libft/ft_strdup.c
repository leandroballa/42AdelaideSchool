/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lballa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 16:08:14 by lballa            #+#    #+#             */
/*   Updated: 2023/04/17 14:39:19 by lballa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
SYNOPSIS
     char *
     strdup(const char *s1);
DESCRIPTION
     The strdup() function allocates sufficient memory for a copy of the string 
	 s1, does the copy, and returns a pointer to it.  The pointer may subse-
     quently be used as an argument to the function free(3).
     If insufficient memory is available, NULL is returned and errno is set to 
	 ENOMEM.
*/
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*str;
	size_t	i;

	if (!s1)
		return (NULL);
	str = (char *)malloc(sizeof(*s1) * (ft_strlen(s1) + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	str[i] = 0;
	return (str);
}
