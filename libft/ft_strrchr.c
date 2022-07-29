/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liglesia <liglesia@student.madrid42.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 16:49:25 by liglesia          #+#    #+#             */
/*   Updated: 2022/07/28 18:37:35 by liglesia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int				len;
	unsigned char	letra;
	char			*aux;
	char			*location;

	len = ft_strlen(aux) + 1;
	aux = s;
	letra = c;
	while (aux[len] > 0)
	{
		if (aux[len] == letra)
		{
			location = &aux[len];
			return (location);
		}
		len--;
	}
	return ("\0");
}

/*
int	main(void)
{
	const char	*s = "Voy a buscar la última a";
	int			c;
	char		*y;
	char		*z;

	c = 1;
	z = ft_strrchr(s, c);
	y = strrchr(s, c);
	printf("%s", y);
	return (0);
}
*/
/* The strrchr() function locates the last occurrence of c 
(converted to a char) in the string pointed to by s. 
The terminating null character is considered to be part of the string;
     therefore if c is `\0', the functions locate the terminating `\0'.

   	Returns a pointer to the located character, or NULL if
     the character does not appear in the string. */