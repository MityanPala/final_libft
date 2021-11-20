/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcoralie <gcoralie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 16:49:15 by gcoralie          #+#    #+#             */
/*   Updated: 2021/11/13 21:29:46 by gcoralie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (*little == '\0')
		return ((char *)big);
	i = 0;
	while (i < len && *(big + i) != '\0')
	{
		j = 0;
		while (*(little + j) != '\0')
		{
			if (*(big + i + j) == '\0' || (i + j) >= len)
				return (NULL);
			if (*(big + i + j) == *(little + j))
				++j;
			else
				break ;
		}
		if (*(little + j) == '\0')
			return ((char *)(big + i));
		++i;
	}
	return (NULL);
}
