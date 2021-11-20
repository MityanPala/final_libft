/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcoralie <gcoralie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 23:26:33 by gcoralie          #+#    #+#             */
/*   Updated: 2021/11/13 21:24:53 by gcoralie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*gc_mem;
	size_t			i;

	gc_mem = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		*(gc_mem + i) = 0;
		++i;
	}
}
