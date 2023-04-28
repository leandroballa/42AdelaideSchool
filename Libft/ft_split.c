/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lballa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 15:44:08 by lballa            #+#    #+#             */
/*   Updated: 2023/04/28 15:44:16 by lballa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_word(const char *str, char c)
{
	size_t	count;
	size_t	flag;

	count = 0;
	flag = 0;
	while (*str)
	{
		if (*str != c && flag == 0)
		{
			flag = 1;
			count++;
		}
		else if (*str == c)
			flag = 0;
		str++;
	}
	return (count);
}

static char	*ft_strndup(const char *s1, size_t n)
{
	char	*str;
	size_t	i;

	i = 0;
	str = malloc(n + 1);
	if (!str)
		return (0);
	while (s1[i] && (i < n))
	{
		str[i] = s1[i];
		i++;
	}
	while (i <= n)
		str[i++] = 0;
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	size_t	i;
	size_t	j;
	size_t	k;

	k = count_word(s, c);
	split = malloc(sizeof(char *) * (k + 1));
	if (!split || !s)
		return (0);
	i = 0;
	j = 0;
	while (j < k)
	{
		while (s[i] == c)
			i++;
		s = &s[i];
		i = 0;
		while (s[i] != c && s[i])
			i++;
		split[j++] = ft_strndup(s, i);
	}
	split[j] = 0;
	return (split);
}
