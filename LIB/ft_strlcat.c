/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liglesia <liglesia@student.madrid42.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 18:31:05 by liglesia          #+#    #+#             */
/*   Updated: 2022/07/20 17:55:44 by liglesia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (i < dstsize)
	{
		while (dst[i] != '\0')
		{
			if (src[j] != '\0')
			{
				dst[i] = src[j];
				j++;
			}
		i++;
		}
		dst[i + 1] = '\0';
	}
	return (ft_strlen(dst) + ft_strlen(src));
}

int main(void)
{
	char dst[] = "123456";
	const char src[] = "ABCDEFGHIJK";
	size_t dstsize = 13;
	size_t res;

	res = ft_strlcat(dst, src, dstsize);
	printf("ft: %s\n", dst);
	printf("ft: %zu\n", res);
	// printf("oficial: %d\n", strlcat(dst, src, dstsize));
	return (0);
}

/* functions return the total length of the string they tried to create.
	 For strlcat() that means the initial length of dst plus
     the length of src */