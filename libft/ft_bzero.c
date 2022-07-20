/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liglesia <liglesia@student.madrid42.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 19:32:41 by liglesia          #+#    #+#             */
/*   Updated: 2022/07/20 15:50:10 by liglesia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned int	i;
	char			*aux;

	aux = s;
	i = 0;
	while (i < n)
	{
		aux[i] = '\0';
		i++;
	}
}

/*
int	main(void)
{
    char *s = "Tiene algo dentro";
    size_t n;

    n = 6;
    ft_bzero(s, n);
    char *s = "\0\0\0\0\0\0algo dentro";
    printf("%s", s + n); // Como deja de imprimir a partir de \0, le pongo +n para probrar que sigue el resto del 
	contenido de s.
	// printf("%s", bzero(s, n)); // La función oficial
    return (0);

The bzero() function writes n zeroed bytes to the string s.  If n is
     zero, bzero() does nothing.


} */
