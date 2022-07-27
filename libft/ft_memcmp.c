/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liglesia <liglesia@student.madrid42.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 16:15:12 by liglesia          #+#    #+#             */
/*   Updated: 2022/07/27 16:28:24 by liglesia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	size_t				x;
	const unsigned char	*aux1;
	const unsigned char	*aux2;

	i = 0;
	x = 0;
	aux1 = s1;
	aux2 = s2;
	while (aux1[i] != '\0' && aux2[i] != '\0' && i < n)
	{
		if (aux1[i] != aux2[i])
		{
			x = aux1[i] - aux2[i];
			return (x);
		}
		else
			i++;
	}
	return (x);
}

/*
int main(void)
{
	char s1[] = "123459";
	char s2[] = "123458";
	size_t n;
	int y;

	n = 8;

	y = (ft_memcmp(s1, s2, n));
	printf("%d\n", y);
	printf("%d\n", memcmp(s1, s2, n)); // La función oficial
	return (0);
}
*/