/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lballa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 16:35:54 by lballa            #+#    #+#             */
/*   Updated: 2023/04/28 16:35:57 by lballa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Allocates (with malloc(3)) and returns a copy of ’s1’ with the characters 
 * specified in ’set’ removed from the beginning and the end of the string.
*/

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trim;
	size_t	st;
	size_t	end;

	if (!s1 || !set)
		return (0);
	st = 0;
	while (s1[st] && ft_strchr(set, s1[st]))
		st++;
	end = ft_strlen(s1);
	while (end > st && ft_strchr(set, s1[end - 1]))
		end--;
	trim = ft_substr(s1, st, end - st);
	if (!trim)
		return (0);
	return (trim);
}
