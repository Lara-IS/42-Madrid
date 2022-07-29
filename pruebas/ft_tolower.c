/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liglesia <liglesia@student.madrid42.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 16:49:29 by liglesia          #+#    #+#             */
/*   Updated: 2022/07/29 17:58:52 by liglesia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		c = c + 32;
	}
	return (c);
}
/*
int	main(void)
{
	int c;
	unsigned char b;

	b = 0;
	c = 65;
	ft_tolower(c);
	printf("%d", b);
	printf("%d", tolower(c));
	return(0);
}
*/
/* The tolower() function converts an upper-case letter to the corresponding
     lower-case letter.  The argument must be representable as an unsigned
     char or the value of EOF.   If the argument is an upper-case letter, the tolower() function returns
     the corresponding lower-case letter if there is one; otherwise, the argu-
     ment is returned unchanged. */