/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lballa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 14:34:37 by lballa            #+#    #+#             */
/*   Updated: 2023/03/29 14:47:34 by lballa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isalpha(int ar)
{
	if (ar >= 65 && ar <= 90)
		return (1);
	else if (ar >= 97 && ar <= 122)
		return (1);
	else
		return (0);
}
/*
#include <stdio.h>
int main(void)
{
	char c;

	c = '-';
	printf("Return %d", ft_isalpha(c));
}
*/
