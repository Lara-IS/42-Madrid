/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liglesia <liglesia@student.madrid42.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 13:07:17 by liglesia          #+#    #+#             */
/*   Updated: 2022/07/27 14:55:02 by liglesia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <stdlib.h>
# include <ctype.h>
# include <string.h>

void	ft_bzero(void *s, size_t n);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *str1, const void *str2, size_t n);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t	ft_strlen(char *str);
// void	*ft_memset(void *str, int c, size_t n);

#endif

/*
		[1] ISALPHA


		int	ft_isalpha(int c);
		// Comprueba (1/0) si el int recibido corresponde a una letra en ASCII
			  The isalpha() function tests for any character for which isupper(3) or
     		islower(3) is true.  The value of the argument must be representable as
     		an unsigned char or the value of EOF.
		// [2] ISDIGIT
		int		t_isdigit(int c);
		// Comprueba (1/0) si el int recibido corresponde a un dígito (0-9) en ASCII
		// (similar a isnumber)

		// [3] ISALNUM
		int	ft_isalnum(int c);
		// C	mprueba (1/0) si el int recibido corresponde a una letra o dígito en ASCII

		// [4] ISASCII
		int	ft_isascii(int c);
		// // Comprueba (1/0) si el int recibido corresponde a un caracter ASCII
			// [5] ISPRINT
		int	ft_isprint(int c);
		// Comprueba (1/0) si el int recibido corresponde a un caracter
		// I	PRIMIBLE en ASCII

		// [6] STRLEN
		size_t	ft_strlen(char *str);
		// C	lcula la longitud de un string. Devuelve unsigned int (size_t) len.

		// [7] MEMSET
		void	*ft_memset(void *str, int c, size_t n);
		// Traslada el int c (transformado a unsigned char) a las n posiciones
		// de st	, a través del *str.

		// [8] BZERO
		void bzero(void *s, size_t n);
		// Borra los datos de  bytes en la memoria reemplazando el contenido por 0.

		// [9] MEMCPY
		void *ft_memcpy(void *dest, const void *src, size_t n);
		// Copia n caracteres de src a dest, devuelve la dirección de dest (= aux)

		// [10] MEMMOVE
		void    *ft_memmove(void *str1, const void *str2, size_t n);
		Copia n caracteres de str2 a str1 (para bloques de memoria que se
		solapan es más seguro que memcpy porque copia de manera no destructiva).
		Devuelve un puntero a dest.

		// [11] STRLCPY
	size_t
	 strlcpy(char *dst, const char *src, size_t dstsize);

		Strclcpy copia strings con los mismos parámetros y resultado de output es snprintf(3).  Más segura que strncpy.
		Toma el tamaño completo del destino y garantiza \0 si hay espacio (habría que incluirlo en la destsize).
		Copia hasta destsize -1 caracteres de src a dst, terminando en \0 si destsize != 0.
		Retorna la longitud total de dest	final (que es la de src al inicio)

		// [12] STRLCAT
	size_t
	 strlcat(char *dst, const char *src, size_t dstsize);

	Strlcat concatena el string src al final	de dst. Pondrá como máximo dstsize - srtlen(dst) - 1.
	Null terminate (salvo error, ver man).
	Retorna la longitud total del string dest+src.

	// [13] TOUPPER
	Pasa de minúsculas a mayúsculas. Argumento debe ser reresentable como unsigned char o EOF.
		Devuelve el argumento transformado (o lo mantiene si es correcto).

	// [14] TOLOWER
	Pasa de mayúsculas a minúsculas. Argumento debe ser reresentable como unsigned char o EOF.
	Devuelve el argumento transformado (o lo mantiene si es correcto).

	// [15] STRCHR

	// [16] STRRCHR

	// [17] STRNCMP

	// [18] MEMCHR
	void *  ft_memchr(const void *s, int c, size_t n);
	Localiza la primera aparición de c (convertido en unsigned char) en el string s.
	Devuelve un puntero al byte localizado, o NULL si el caracter no existe en n bytes

	// [19] MEMCMP
	int	ft_memcmp(const void *s1, const void *s2, size_t n);
	Compara s1 y s2 byte a byte, durante n bytes. Devuelve 0 si son identicos. Si no,
	la diferencia de dos primeros distntos (como unsigned char).

	// [20] STRNSTR

	// [	1] ATOI

	// [A] CALLOC

	// [B] STRDUP

*/