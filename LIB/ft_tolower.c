/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liglesia <liglesia@student.madrid42.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 16:49:29 by liglesia          #+#    #+#             */
/*   Updated: 2022/03/31 17:14:13 by liglesia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	unsigned char	b;

	b = c;
	if (b >= 'A' && b <= 'Z')
	{
		b = b + 32;
	}
	return (b);
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