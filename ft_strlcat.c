/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcoralie <gcoralie@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 23:40:20 by gcoralie          #+#    #+#             */
/*   Updated: 2021/11/08 13:44:41 by gcoralie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	res;
	size_t	dst_len;

	if (size == 0)
		return (ft_strlen(src));
	res = 0;
	while (*(dst + res) != '\0')
	{
		if ((res++ + 1) == size)
			return (size + ft_strlen(src));
	}
	dst_len = res;
	dst = dst + dst_len;
	res = 0;
	while (res < (size - dst_len - 1))
	{
		*(dst + res) = *(src + res);
		if (*(src + res) == '\0')
			return (dst_len + ft_strlen(src));
		++res;
	}
	*(dst + res) = '\0';
	return (dst_len + ft_strlen(src));
}
