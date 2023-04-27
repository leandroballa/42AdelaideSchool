/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lballa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 14:14:38 by lballa            #+#    #+#             */
/*   Updated: 2023/04/17 13:52:58 by lballa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
PARAMETERS
	size_t
    strlen(const char *s);
DESCRIPTION
     The strlen() function computes the length of the string s.  
RETURN VALUES
     The strlen() function returns the number of characters that precede the 
	 terminating NUL character.
*/
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_strlen("abc"));
}
*/
