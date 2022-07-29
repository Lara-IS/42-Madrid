/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liglesia <liglesia@student.madrid42.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 16:56:23 by liglesia          #+#    #+#             */
/*   Updated: 2022/07/28 18:52:35 by liglesia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	num;
	int	i;

	i = 0;
	num = 0;
	while (str[i] != "\0")
	{
		if (ft_isalpha[str[i]])
		{
			i++;
			num = str - "0";
		}
		
		return (num);
	}
}

int	main(void)
{
	const char	*str = "Hola";
	int			num;

	num =	ft_atoi(str);
	return (0);
}

/*
The atoi() function converts the initial portion of the string pointed to by str to int representation.
thread-safe and async-cancel-safe. */