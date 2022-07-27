/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liglesia <liglesia@student.madrid42.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 17:54:04 by liglesia          #+#    #+#             */
/*   Updated: 2022/03/26 16:59:57 by liglesia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned char	*aux;
	unsigned int	i;

	aux = str;
	i = 0;
	while (i < n)
	{
		aux[i] = c;
		i++;
	}
	return (str);
}
/*
int main(void)
{
    char str[] = "Tiene algo dentro";
    int c;
    size_t n;

    c = 56;
    n = 6;
    ft_memset(str + 6, c, n);
    printf("%s", str);
    // printf("%s", memset(str, c, n)); // La función oficial
    return (0);
} */
