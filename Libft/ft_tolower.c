/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lballa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 10:38:11 by lballa            #+#    #+#             */
/*   Updated: 2023/04/17 14:00:16 by lballa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
SYNOPSIS
     int
     tolower(int c);
DESCRIPTION
     The tolower() function converts an upper-case letter to the corresponding 
	 lower-case letter.  The argument must be representable as an unsigned char
     or the value of EOF.

     Although the tolower() function uses the current locale, the tolower_l() 
	 function may be passed a locale directly. See xlocale(3) for more informa-
     tion.

RETURN VALUES
     If the argument is an upper-case letter, the tolower() function returns 
	 the corresponding lower-case letter if there is one; otherwise, the 
	 argument is returned unchanged.
*/
int	ft_tolower(int i)
{
	if (i >= 'A' && i <= 'Z')
		return (i + 32);
	return (i);
}
