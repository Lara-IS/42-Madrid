/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liglesia <liglesia@student.madrid42.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 16:49:00 by liglesia          #+#    #+#             */
/*   Updated: 2022/03/31 19:20:06 by liglesia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize > 0)
	{
		while (i < dstsize)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i + 1] = '\0';
	}
	return (dstsize);
}
// DUDA: en la funcion oficial te devuelve len(src), ¿entonces devolvemos dstsize - que la hemos asignado con otor valor-?
int	main(void)
{
	char dst[]= "Abracadabra";
	const char src[]= "Avadakedavra";
	size_t dstsize = 10;
	size_t res;	

	res = ft_strlcpy(dst, src, dstsize);
	printf("ft: %zu\n", res);
	printf("oficial: %zu\n", strlcpy(dst, src, dstsize));
	return (0);
}
