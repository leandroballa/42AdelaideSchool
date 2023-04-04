/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lballa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 15:46:12 by lballa            #+#    #+#             */
/*   Updated: 2023/03/29 15:55:00 by lballa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int arg)
{
	if (arg >= 33 && arg <= 127)
		return (1);
	else
		return (0);
}
/*
#include <stdio.h>
#include <ctype.h>
int main(void)
{
	char c;

	c = 'a';
	printf("Return %d\n", ft_isprint(c));
	printf("Original %d\n", isprint(c));

	c = '\n';
	printf("Return %d\n", ft_isprint(c));
	printf("Original %d\n", isprint(c));
}
*/
