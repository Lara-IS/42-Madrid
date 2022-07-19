/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liglesia <liglesia@student.madrid42.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 15:04:39 by liglesia          #+#    #+#             */
/*   Updated: 2022/03/31 20:22:34 by liglesia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	unsigned char		a;
	const unsigned char	*aux;

	aux = s;
	a = c;
	i = 0;
	while (aux[i] != '\0' && i < n)
	{
		if (aux[i] == a)
		{
			return ((void *)&aux[i]);
		}
		else
			i++;
	}
	return (NULL);
}
/*
int main(void)
{
	char	s[] = "A ver si encuentras la letra.";
	int c;
	size_t n;
	//const void 	*s;

    c = 65;
    n = 5; 
    ft_memchr(s, c, n);
    printf("%s\n", s); 
	printf("%p\n", &s[0]); // Dirección de 'A' en s
    printf("%p\n", memchr(s, c, n)); // La función oficial
    return (0);
} */
