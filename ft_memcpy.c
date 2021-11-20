/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcoralie <gcoralie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 16:06:47 by gcoralie          #+#    #+#             */
/*   Updated: 2021/11/13 21:27:11 by gcoralie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*destination;
	const unsigned char	*source;
	size_t				i;

	if (dest == NULL && src == NULL)
		return (NULL);
	destination = (unsigned char *)dest;
	source = (const unsigned char *)src;
	i = 0;
	while (i < n)
	{
		*(destination + i) = *(source + i);
		++i;
	}
	return (dest);
}
