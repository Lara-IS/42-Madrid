/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liglesia <liglesia@student.madrid42.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 16:49:32 by liglesia          #+#    #+#             */
/*   Updated: 2022/07/27 16:41:09 by liglesia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	unsigned char	b;

	b = c;
	if (b >= 'a' && b <= 'z')
	{
		b = b - 32;
	}
	return (b);
}
/*
int	main(void)
{
	int c;
	unsigned char b;

	b = 0;
	c = 97;
	printf("%d\n", ft_toupper(c));
	printf("%d", toupper(c));
	return(0);
} */
