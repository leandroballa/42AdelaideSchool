/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lballa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 16:11:47 by lballa            #+#    #+#             */
/*   Updated: 2023/04/17 15:17:55 by lballa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
SYNOPSIS
     void *
     calloc(size_t count, size_t size);
DESCRIPTION
     The malloc(), calloc(), valloc(), realloc(), and reallocf() functions 
	 allocate memory.  The allocated memory is aligned such that it can be used 
	 for any data type, including AltiVec- and SSE-related types.  
	 The aligned_alloc() function allocates memory with the requested alignment.
	 The free() function frees allocations that were created via the preceding 
	 allocation functions.
     The calloc() function contiguously allocates enough space for count objects
	 that are size bytes of memory each and returns a pointer to the allocated
     memory.  The allocated memory is filled with bytes of value zero.
RETURN VALUES
     If successful, calloc(), malloc(), realloc(), reallocf(), valloc(), and 
	 aligned_alloc() functions return a pointer to allocated memory.  If there 
	 is an error, they return a NULL pointer and set errno to ENOMEM.
*/

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	total;
	char	*mem;
	size_t	i;

	total = count * size;
	mem = malloc(total);
	if (mem == NULL)
		return (NULL);
	i = 0;
	while (i < total)
	{
		mem[i] = 0;
		i++;
	}
	return (mem);
}
