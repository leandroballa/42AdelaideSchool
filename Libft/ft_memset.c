/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lballa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 15:57:46 by lballa            #+#    #+#             */
/*   Updated: 2023/04/03 10:32:53 by lballa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*memset(void *str, int c, int n)
{
	int	i;

	i = 0;
	while (i <= n -1)
	{
		&str[i] = c;
		i++;
	}
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	t[10];

	t = "1234567890";
	strcpy(t,"1234567890");
	memset(t, '-', 2);
	printf("Ret %s", t);
}
*/
