/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liglesia <liglesia@student.madrid42.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 15:35:33 by liglesia          #+#    #+#             */
/*   Updated: 2022/07/20 16:44:41 by liglesia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
	{
		return (1);
	}
	else
		return (0);
}

/*
#include <stdio.h>
#include <stdio.h>
#include <ctype.h>

int main(void)
{
	int c; 
	c = 112;
    printf("%d\n", ft_isascii(c));
	printf("%d", isascii(c)); 
// La función oficial
    return (0);

The isascii() function tests for an ASCII character, which is any character between
     0 and octal 0177 inclusive.

} */