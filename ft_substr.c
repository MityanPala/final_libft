/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcoralie <gcoralie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 08:52:12 by gcoralie          #+#    #+#             */
/*   Updated: 2021/11/13 21:30:09 by gcoralie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*res;
	size_t	sstart;
	size_t	i;

	if (s == NULL)
		return (NULL);
	sstart = (size_t)start;
	if (sstart >= ft_strlen(s) || len == 0)
	{
		res = ft_strdup("");
		return (res);
	}
	if (len >= ft_strlen(s))
		len = ft_strlen(s) - sstart;
	res = (char *)malloc(sizeof(char) * (len + 1));
	if (res == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		*(res + i) = *(s + sstart + i);
		++i;
	}
	*(res + i) = '\0';
	return (res);
}
