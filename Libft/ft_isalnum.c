/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lballa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 15:00:34 by lballa            #+#    #+#             */
/*   Updated: 2023/03/29 15:07:36 by lballa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int arg)
{
	if (arg >= 48 && arg <= 57)
		return (1);
	else if (arg >= 65 && arg <= 90)
		return (1);
	else if (arg >= 97 && arg <= 122)
		return (1);
	else
		return (0);
}
/*
#include <stdio.h>
int main(void)
{
	char c;

	c = '=';
	printf("Return %d", ft_isalnum(c));
}
*/
