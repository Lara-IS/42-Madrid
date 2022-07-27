/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liglesia <liglesia@student.madrid42.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 20:05:46 by liglesia          #+#    #+#             */
/*   Updated: 2022/07/27 16:24:22 by liglesia         ###   ########.fr       */
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
		if ((aux1[i] != '\0') && (aux2[i] != '\0'))
		{
			aux1[i] = aux2[i];
			i++;
		}
	}
	return (0);
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

The memcpy() function copies n bytes from memory area src to memory area
     dst.  If dst and src overlap, behavior is undefined.  Applications in
     which dst and src might overlap should use memmove(3) instead.
	 
// printf("%p\t%c\n", aux1, *aux1);	return (dest); */