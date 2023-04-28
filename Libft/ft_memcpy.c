/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lballa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 10:31:15 by lballa            #+#    #+#             */
/*   Updated: 2023/04/28 15:53:10 by lballa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
SYNOPSIS
     void *
     memcpy(void *restrict dst, const void *restrict src, size_t n);
DESCRIPTION
     The memcpy() function copies n bytes from memory area src to memory area 
	 dst.  If dst and src overlap, behavior is undefined.  Applications in which
     dst and src might overlap should use memmove(3) instead.
RETURN VALUES
     The memcpy() function returns the original value of dst.
*/

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*d;
	char	*s;

	i = 0;
	d = (char *)dst;
	s = (char *)src;
	if (!dst && !src)
		return (NULL);
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dst);
}
