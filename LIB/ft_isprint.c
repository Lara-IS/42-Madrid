/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liglesia <liglesia@student.madrid42.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 16:40:26 by liglesia          #+#    #+#             */
/*   Updated: 2022/03/26 16:50:29 by liglesia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
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
	c = 130;
    printf("%d\n", ft_isprint(c));
	printf("%d", isprint(c)); // La función oficial
    return (0);
} */