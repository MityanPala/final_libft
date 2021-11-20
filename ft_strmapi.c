/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcoralie <gcoralie@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 02:26:22 by gcoralie          #+#    #+#             */
/*   Updated: 2021/11/12 02:35:31 by gcoralie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	len;
	unsigned int	i;
	char			*res;

	if (s == NULL || f == NULL)
		return (NULL);
	len = (unsigned int)ft_strlen(s);
	res = (char *)malloc(sizeof(char) * (len + 1));
	if (res == NULL)
		return (NULL);
	*(res + len) = '\0';
	i = 0;
	while (i < len)
	{
		*(res + i) = f(i, *(s + i));
		++i;
	}
	return (res);
}
