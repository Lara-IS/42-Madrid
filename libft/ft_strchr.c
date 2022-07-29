/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liglesia <liglesia@student.madrid42.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 16:48:53 by liglesia          #+#    #+#             */
/*   Updated: 2022/07/28 18:38:10 by liglesia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int				i;
	unsigned char	x;

	x = c;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
		{
			return (str);
		}
		i++;
	}
	return ("\0");
}

/*
int	main(void)
{
	char str[] = "123456789";
	int c = 7;
	unsigned char y;

	y = (ft_strchr(str, c));
	printf("%d\n", y);
	printf("%s\n", strstr(str, c)); // La función oficial
	return (0);
}
*/
/* 
The strchr() function locates the first occurrence of c (converted to a
     char) in the string pointed to by s.  The terminating null character is
     considered to be part of the string; therefore if c is `\0',
	 the functions locate the terminating `\0'.
	 The function returns a pointer to the located
     character, or NULL if the character does not appear in the string. */