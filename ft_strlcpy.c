/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lballa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 10:34:38 by lballa            #+#    #+#             */
/*   Updated: 2023/04/17 14:18:34 by lballa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
SYNOPSIS
     size_t
     strlcpy(char * restrict dst, const char * restrict src, size_t dstsize);
DESCRIPTION
     The strlcpy() copy and concatenate strings with the same input parameters 
	 and output result as snprintf(3). They are designed to be safer, more 
	 consistent, and less error prone replacements for the easily misused 
	 functions strncpy(3).
     strlcpy() take the full size of the destination buffer and guarantee 
	 NUL-termination if there is room.  Note that room for the NUL
     should be included in dstsize.
     strlcpy() copies up to dstsize - 1 characters from the string src to dst, 
	 NUL-terminating the result if dstsize is not 0.
RETURN VALUES
     Besides quibbles over the return type (size_t versus int) and signal 
	 handler safety (snprintf(3) is not entirely safe on some systems), the 
	 following two are equivalent:
           n = strlcpy(dst, src, len);
           n = snprintf(dst, len, "%s", src);
     Like snprintf(3), the strlcpy() and strlcat() functions return the total 
	 length of the string they tried to create.  For strlcpy() that means the
     length of src.  For strlcat() that means the initial length of dst plus the
	 length of src.
     If the return value is >= dstsize, the output string has been truncated.
	 It is the caller's responsibility to handle this.
*/
#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size == 0)
	{
		while (src[i])
			i++;
		return (i);
	}
	while (i < size - 1 && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	if (i < size)
		dest[i] = '\0';
	while (src[i] != '\0')
		i++;
	return (i);
}
