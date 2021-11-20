/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcoralie <gcoralie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 23:56:45 by gcoralie          #+#    #+#             */
/*   Updated: 2021/11/13 21:26:47 by gcoralie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				len;
	const unsigned char	*mem;
	unsigned char		uc;

	mem = (const unsigned char *)s;
	uc = (unsigned char)c;
	len = 0;
	while (len < n)
	{
		if (*(mem + len) == uc)
			return ((void *)(mem + len));
		++len;
	}
	return (NULL);
}
