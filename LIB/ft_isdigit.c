/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liglesia <liglesia@student.madrid42.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 18:37:06 by liglesia          #+#    #+#             */
/*   Updated: 2022/03/26 16:57:22 by liglesia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
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
	c = X;
    printf("%d\n", ft_digit(c));
	printf("%d", isdigit(c)); // La función oficial
    return (0);
} */