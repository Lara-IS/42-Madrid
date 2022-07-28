/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liglesia <liglesia@student.madrid42.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 16:49:21 by liglesia          #+#    #+#             */
/*   Updated: 2022/07/27 16:38:25 by liglesia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)

	size_t	i;
	char	x;

	i = 0;
	x = '0';
	if (s1[i] != '\0' && s2[i] != '\0' && i < n)
	{
		if (s1[i] != s2[i])
		{
			x = *s1[i];
		}
		i++;
	}
	return (*s1);
}

/*
int main(void)
{
	const char s1[] = "123456789";
	const char s2[] = "123458789";
	size_t n;
	int y;

	n = 5;

	y = (ft_strnstr(s1, s2, n));
	printf("%s\n", y);
	printf("%d\n", strnstr(s1, s2, n)); // La función oficial
	return (0);
}*/