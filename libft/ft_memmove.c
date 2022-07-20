/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liglesia <liglesia@student.madrid42.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 12:36:25 by liglesia          #+#    #+#             */
/*   Updated: 2022/07/20 15:57:17 by liglesia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *str1, const void *str2, size_t n)
{
	unsigned int	i;
	char			*aux1;
	const char		*aux2;		

	aux1 = str1;
	aux2 = str2;
	i = 0;
	if (*aux1 - *aux2 < 0)
	{
		while (i < n)
		{
			aux1[i] = aux2[i];
			i++;
		}
	}
	else
	{
		i = n - 1;
		while (i >= 0)
		{
			aux1[i] = aux2[i];
			i--;
		}
	}
	return (aux1);
}
/*
int main(void)
{
    char str1[] = "1234567";
    char str2[] = "ABCDCEFG";
    size_t n;

    n = 3; 
    ft_memmove(str1, str2, n);
    printf("%s", str1);
    printf("%p", memmove(str1, str2, n)); // La función oficial
    return (0);
}

 The memmove() function copies len bytes from string src to string dst.
     The two strings may overlap; the copy is always done in a non-destructive
     manner.

RETURN VALUES
     The memmove() function returns the original value of dst
*/