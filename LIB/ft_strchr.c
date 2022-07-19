/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liglesia <liglesia@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 16:48:53 by liglesia          #+#    #+#             */
/*   Updated: 2022/04/04 20:47:10 by liglesia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// REVISAR
char *ft_strchr(const char *str, int c)
{
    int i;
    unsigned char x;
    x = 0;

    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] == c)
        {
            return (str[i]);
        }
        i++;
    }
    return (str);
}
int main(void)
{
    char str[] = "123456789";
    int c = 7;

    unsigned char y;

    y = (ft_strchr(str, c));
    printf("%d\n", y);
    printf("%d\n", strnstr(str, c)); // La función oficial
    return (0);
}