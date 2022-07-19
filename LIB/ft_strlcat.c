/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liglesia <liglesia@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 18:31:05 by liglesia          #+#    #+#             */
/*   Updated: 2022/04/04 19:41:24 by liglesia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t
ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	if (i < dstsize)
		while (dst[i] != '\0')
		{
			i++;
		}
	while ((src[j] != '\0') && ((i + j) < (dstsize)))
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i + 1] = '\0';
	return (dstsize);
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