/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcoralie <gcoralie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 15:57:18 by gcoralie          #+#    #+#             */
/*   Updated: 2021/11/13 21:27:31 by gcoralie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*gc_mem;
	unsigned char	gc_byte;
	size_t			i;	

	gc_mem = (unsigned char *)s;
	gc_byte = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		*(gc_mem + i) = gc_byte;
		++i;
	}
	return (s);
}
