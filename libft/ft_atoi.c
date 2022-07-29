/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liglesia <liglesia@student.madrid42.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 16:56:23 by liglesia          #+#    #+#             */
/*   Updated: 2022/07/29 17:01:14 by liglesia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	num;
	int	i;
	int	*y;
	int	resultado;

	i = 0;
	y = 0;
	num = 0;
	resultado = '\0';
	while (str[i] != '\0')
	{
		if ((str[i] >= 'A' && str[i] <= 'Z') \
		|| (str[i] >= 'a' && str[i] <= 'z'))
		{
			num[y] = str[i] - 0;
			i++;
			y++;
			resultado = resultado + num;
		}
	}
	return (resultado);
}

int	main(void)
{
	const char	*str = "1234";
	int			x;
	int			z;

	x = ft_atoi(str);
	z = atoi(str);
	printf("%d", x);
	printf("%d", z);
	return (0);
}

/* The atoi() function converts the initial portion of the \
string pointed to by str to int representation.
thread-safe and async-cancel-safe. */