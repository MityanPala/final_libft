/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcoralie <gcoralie@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 01:50:56 by gcoralie          #+#    #+#             */
/*   Updated: 2021/11/11 13:35:19 by gcoralie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	char	*res;
	char	*buf;

	res = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (res == NULL)
		return (NULL);
	buf = res;
	while (*s != '\0')
	{
		*buf = *s;
		++buf;
		++s;
	}
	*buf = '\0';
	return (res);
}
