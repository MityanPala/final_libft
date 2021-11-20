/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcoralie <gcoralie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 16:17:37 by gcoralie          #+#    #+#             */
/*   Updated: 2021/11/13 21:27:21 by gcoralie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

static void	gc_copy_mem(unsigned char *dest,
				const unsigned char *src, size_t len, int direction);

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*destination;
	const unsigned char	*source;

	if (dest == NULL && src == NULL)
		return (NULL);
	destination = (unsigned char *)dest;
	source = (const unsigned char *)src;
	if (src >= dest)
		gc_copy_mem(destination, source, n, 0);
	else
		gc_copy_mem(destination, source, n, 1);
	return (dest);
}

static void	gc_copy_mem(unsigned char *dest,
	const unsigned char *src, size_t len, int direction)
{
	size_t	i;

	if (direction == 0)
	{
		i = 0;
		while (i < len)
		{
			*(dest + i) = *(src + i);
			++i;
		}
	}
	else
	{
		i = len;
		while (i > 0)
		{
			--i;
			*(dest + i) = *(src + i);
		}
	}
}
