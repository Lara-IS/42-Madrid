/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liglesia <liglesia@student.madrid42.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 16:49:16 by liglesia          #+#    #+#             */
/*   Updated: 2022/07/27 16:34:46 by liglesia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	unsigned int	x;

	i = 0;
	x = 0;
	while ((s1[i] != '\0' && s2[i] != '\0' && i < n))
	{
		if (s1[i] != s2[i])
		{
			x = s1[i] - s2[i];
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
    char s1[] = "123456";
    char s2[] = "123458";
    int n;
    int y;

    n = 8;

    y = (ft_strncmp(s1, s2, n));
    printf("%d\n", y);
    printf("%d\n", strncmp(s1, s2, n)); // La función oficial
    return (0);
} */