/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liglesia <liglesia@student.madrid42.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 16:49:00 by liglesia          #+#    #+#             */
/*   Updated: 2022/07/27 15:28:10 by liglesia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	res;

	i = 0;
	res = 0;
	while (src[res])
		res++;
	if (dstsize > 0)
	{
		while (i < dstsize)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i + 1] = '\0';
	}
	return (res);
}

/*
int	main(void)
{
	char dst[]= "Abracadabra";
	const char src[]= "123456789123";
	size_t dstsize = 10;
	size_t res;	

	res = ft_strlcpy(dst, src, dstsize);
	printf("ft: %zu\n", res);
	printf("oficial: %zu\n", strlcpy(dst, src, dstsize));
	return (0);
}

*/

/*
The strlcpy() function copies up to size - 1 characters from the
NUL-terminated string src to dst, NUL-terminating the result.
copy and concatenate strings with the same input parameters.
	Take the full size of the destination buffer and
     guarantee NUL-termination if there is room.  Note that room for the NUL
     should be included in dstsize.

     strlcpy() copies up to dstsize - 1 characters from the string src to dst,
     NUL-terminating the result if dstsize is not 0. 
	 return the total length of the string they tried to create */