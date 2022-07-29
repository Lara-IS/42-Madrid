### LIBRARY OF USEFUL FUCTIONS
# C

1st project - 42 Cursus


> Nombre de programa: libft.a
> Archivos a entregar: Makefile, libft.h, *.c
> Makefile: NAME, all, clean, fclean, re

Consideraciones técnicas
- Declarar variables globales está prohibido.
- Si necesitas separar una función compleja en varias, asegúrate de utilizar la palabra static para ello. De esta forma, las funciones se quedarán en el archivo apropiado.
- Tu libft.a tiene que ser creado en la raíz del repositorio. Pon todos tus archivos en la raíz de tu repositorio.
- Se prohibe entregar archivos no utilizados.
- Todos los archivos .c deben compilarse con las flags -Wall -Werror -Wextra.
- Debes utilizar el comando ar para generar la librería. El uso de libtool queda
prohibido.

## PARTE OBLIGATORIA

Para empezar, deberás rehacer algunas funciones de la libc. Tus funciones tendrán los
mismos prototipos e implementarán los mismos comportamientos que las funciones origi-
nales. Deberán ser tal y como las describe el man. La única diferencia será la nomenclatura.
Empezarán con el prefijo “ft_”. Por ejemplo, strlen se convertirá en ft_strlen.

- ft_bzero.c OK
- ft_isalnum.c OK
- ft_isalpha.c OK
- ft_isascii.c OK
- ft_isdigit.c OK
- ft_isprint.c OK
- ft_memchr.c 
	[fail]: your memchr failed to find a \0
- ft_memcmp.c 
	ft_memcmp:     [OK] [OK] [OK] [OK] [FAILED] [FAILED] [FAILED] [OK] [OK] [OK] 
	[fail]: your memcmp does not cast the memory in unsigned char
	[fail]: your memcmp stop at \0
	[fail]: your memcmp does not work with basic input
- ft_memcpy.c 
	[fail]: your memcpy's return is false/doesn't work with basic params
	[crash]: your memcpy does not behave well with NULL as both params with size
- ft_memmove.ce
	[crash]: your memmove's return is false/does not work with basic input
	[crash]: your memmove does not work with integers copy
	[fail]: your memmove does not support the overlap (test 1)
	[crash]: your memmove does not support the overlap (test 2)
	[crash]: your memmove does not support the overlap
	[crash]: your memmove crash because it read too many bytes or attempt to read on dst !
	[crash]: your memmove does not well with NULL as both parameters
	[crash]: your memmove does not well with NULL as both parameters and size
- ft_memset.c OK
- ft_strlcat.c
- ft_strlcpy.c
	[fail]: your strlcpy does not works with basic input
	[fail]: your strlcpy overflow the dest
	[fail]: your strlcpy does works whe size < strlen(src)
	[fail]: your strlcpy does not works with 0-length string
- ft_strlen.c OK
- ft_strncmp.c
	ft_strncmp:    [OK] [OK] [OK] [OK] [FAILED] [FAILED] [FAILED] [OK] [OK] [FAILED] [OK] [OK] [OK] [OK] 
	[fail]: your strncmp does not work with zero length string
	[fail]: your strncmp does not work with zero length string
	[fail]: your strncmp does not cast in unsigned char the diff
	[fail]: your strncmp does not work with non ascii chars
- ft_strlcpy: 
	[FAILED] [OK] [FAILED] [FAILED] [FAILED] [OK] [OK] 
	[fail]: your strlcpy does not works with basic input
	[fail]: your strlcpy overflow the dest
	[fail]: your strlcpy does works whe size < strlen(src)
	[fail]: your strlcpy does not works with 0-length string
- ft_tolower.c
- ft_toupper.c
- ft_strlcat:    [MISSING]
- ft_strnstr:    [MISSING]
- ft_atoi:       [MISSING]
- ft_calloc:     [MISSING]
- ft_strdup:     [MISSING]


Con malloc():
- [] calloc 
- [] strdup

> DUDAS
> - 
> - 

## ADICIONALES

## BONUS



