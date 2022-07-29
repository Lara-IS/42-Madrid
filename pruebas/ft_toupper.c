/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liglesia <liglesia@student.madrid42.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 16:49:32 by liglesia          #+#    #+#             */
/*   Updated: 2022/07/29 17:58:52 by liglesia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if ((c >= 'a') && (c <= 'z'))
	{
		return (c - 32);
	}
	return (c);
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
