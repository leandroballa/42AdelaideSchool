/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lballa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 14:20:15 by lballa            #+#    #+#             */
/*   Updated: 2023/04/17 14:14:26 by lballa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
SYNOPSIS
     char *
     strncat(char *restrict s1, const char *restrict s2, size_t n);
DESCRIPTION
     The strcat() and strncat() functions append a copy of the null-terminated 
	 string s2 to the end of the null-terminated string s1, then add a terminat-
     ing `\0'.  The string s1 must have sufficient space to hold the result.
     The strncat() function appends not more than n characters from s2, and then
	 adds a terminating `\0'.
     The source and destination strings should not overlap, as the behavior is 
	 undefined.
RETURN VALUES
     The strcat() and strncat() functions return the pointer s1.
*/
unsigned	int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	res_d;
	unsigned int	res_s;

	i = ft_strlen(dest);
	j = 0;
	res_d = ft_strlen(dest);
	res_s = ft_strlen(src);
	if (size < 1)
		return (res_s + size);
	while (src[j] && i < size - 1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	if (size < res_d)
		return (res_s + size);
	else
		return (res_d + res_s);
}
/*
#include <stdio.h>
int		main(void)
{
	char			dest[50] = "abcd";
	char			src[50] = "xyz";
	unsigned int	size;
	unsigned int	ret;
	size = 7;
	ret = ft_strlcat(dest, src, size);
	printf("%d\n", ret);
	printf("dest: %s\nsrc: %s\n", dest, src);
}
*/
