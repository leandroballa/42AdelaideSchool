/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lballa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 16:35:40 by lballa            #+#    #+#             */
/*   Updated: 2023/04/28 16:35:43 by lballa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The strdup() function allocates sufficient memory for a copy of the 
 * string s1, does the copy, and returns a pointer to it.  The pointer may 
 * subsequently be used as an argument to the function free(3).
 * If insufficient memory is available, NULL is returned and 
 * errno is set to ENOMEM.
*/

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dup;
	int		i;
	int		j;

	i = 0;
	j = 0;
	dup = (char *)malloc(sizeof(char) * ft_strlen(s1) + 1);
	if (dup == NULL)
		return (NULL);
	while (s1[j] != '\0')
	{
		dup[i] = s1[j];
		i++;
		j++;
	}
	dup[i] = '\0';
	return (dup);
}
