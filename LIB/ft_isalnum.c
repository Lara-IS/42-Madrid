/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liglesia <liglesia@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 15:29:57 by liglesia          #+#    #+#             */
/*   Updated: 2022/04/29 16:26:18 by liglesia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isalnum(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') || (c >= '0' && c <= '9'))
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