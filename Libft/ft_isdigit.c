/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lballa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 14:51:30 by lballa            #+#    #+#             */
/*   Updated: 2023/04/03 12:25:48 by lballa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int ar)
{
	if (ar >= 48 && ar <= 57)
		return (1);
	else
		return (0);
}
/*
#include <stdio.h>
int main (void)
{
	int a;

	a = '1';
	printf("Return %d", ft_isdigit(a));
}
*/
