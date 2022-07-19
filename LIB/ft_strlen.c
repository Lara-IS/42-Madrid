/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liglesia <liglesia@student.madrid42.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 16:59:32 by liglesia          #+#    #+#             */
/*   Updated: 2022/03/26 16:58:07 by liglesia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(char *str)
{
	size_t	len;
	int		i;

	len = 0;
	i = 0;
	while (str[i] != '\0')
	{
		i++;
		len++;
	}
	return (len);
}

/*
int main(void)
{
	char str[] = "Ay Ay que ya me sale"; 
	
    printf("%lu\n", ft_strlen(str));
	printf("%lu", strlen(str)); // La función oficial
    return (0);
} */