/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcoralie <gcoralie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 23:40:44 by gcoralie          #+#    #+#             */
/*   Updated: 2021/11/13 21:29:38 by gcoralie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t				i;
	const unsigned char	*us1;
	const unsigned char	*us2;

	us1 = (const unsigned char *)s1;
	us2 = (const unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if ((*(us1 + i) != *(us2 + i)) || *(us1 + i) == '\0'
			|| *(us2 + i) == '\0')
			return ((int)*(us1 + i) - (int)*(us2 + i));
		++i;
	}
	return (0);
}
