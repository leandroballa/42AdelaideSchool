/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lballa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 10:38:40 by lballa            #+#    #+#             */
/*   Updated: 2023/04/17 13:58:34 by lballa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
SYNOPSIS
     int
     toupper(int c);
DESCRIPTION
     The toupper() function converts a lower-case letter to the corresponding 
	 upper-case letter.  The argument must be representable as an unsigned char
     or the value of EOF.

     Although the toupper() function uses the current locale, the toupper_l() 
	 function may be passed a locale directly. See xlocale(3) for more informa-
     tion.

RETURN VALUES
     If the argument is a lower-case letter, the toupper() function returns the 
	 corresponding upper-case letter if there is one; otherwise, the argument
     is returned unchanged.
*/
int	ft_toupper(int i)
{
	if (i >= 'a' && i <= 'z')
		return (i - 32);
	return (i);
}
