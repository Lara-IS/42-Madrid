/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liglesia <liglesia@student.madrid42.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 16:14:10 by liglesia          #+#    #+#             */
/*   Updated: 2022/07/29 16:19:05 by liglesia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{

}

/* The malloc(), calloc(), valloc(), realloc(), and reallocf() functions
     allocate memory.  The allocated memory is aligned such that it can be
     used for any data type, including AltiVec- and SSE-related types.  The
     free() function frees allocations that were created via the preceding
     allocation functions.

	   The malloc() function allocates size bytes of memory and returns a
     pointer to the allocated memory.

     The calloc() function contiguously allocates enough space for count
     objects that are size bytes of memory each and returns a pointer to the
     allocated memory.  The allocated memory is filled with bytes of value
     zero.

	 eturn a pointer to allocated memory.  If there is an error,
     they return a NULL pointer and set errno to ENOMEM.

	 The free() function does not return a value. */