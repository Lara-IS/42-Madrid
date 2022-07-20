/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liglesia <liglesia@student.madrid42.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 15:29:57 by liglesia          #+#    #+#             */
/*   Updated: 2022/07/20 13:46:33 by liglesia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')
		|| (c >= '0' && c <= '9'))
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
	c = 56;
	printf("%d\n", ft_isalnum(c));
	printf("%d", isalnum(c)); // La función oficial
	return (0);
} */