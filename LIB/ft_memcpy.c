/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liglesia <liglesia@student.madrid42.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 20:05:46 by liglesia          #+#    #+#             */
/*   Updated: 2022/03/26 16:55:48 by liglesia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned int	i;
	char			*aux1;
	const char		*aux2;		

	aux1 = dest;
	aux2 = src;
	i = 0;
	while (i < n)
	{
		aux1[i] = aux2[i];
		i++;
	}
}
/*
int main(void)
{
    char src[] = "ALOHA";
    char dest[] = "Tiene algo dentro";
    size_t n;

    n = 6;
    ft_memcpy(dest, src, n);
    printf("%s", dest);
    // printf("%s", memcopy(src, dest, n)); // La función oficial
    return (0);
}
// printf("%p\t%c\n", aux1, *aux1);	return (dest); */