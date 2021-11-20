/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcoralie <gcoralie@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 20:29:43 by gcoralie          #+#    #+#             */
/*   Updated: 2021/11/08 13:45:03 by gcoralie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	res;
	size_t	src_len;

	src_len = ft_strlen(src);
	if (size == 0)
		return (src_len);
	res = 0;
	while (res < (size - 1))
	{
		*(dst + res) = *(src + res);
		if (*(src + res) == '\0')
			return (src_len);
		++res;
	}
	*(dst + res) = '\0';
	return (src_len);
}
