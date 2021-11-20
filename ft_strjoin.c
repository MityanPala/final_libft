/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcoralie <gcoralie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 11:52:23 by gcoralie          #+#    #+#             */
/*   Updated: 2021/11/13 21:29:18 by gcoralie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len1;
	size_t	len2;
	char	*res;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	len1 = 0;
	len2 = 0;
	if (s1 != NULL)
		len1 = ft_strlen(s1);
	if (s2 != NULL)
		len2 = ft_strlen(s2);
	res = (char *)malloc(sizeof(char) * (len1 + len2 + 1));
	if (res == NULL)
		return (NULL);
	*(res + len1 + len2) = '\0';
	ft_strlcpy(res, s1, len1 + 1);
	ft_strlcpy(res + len1, s2, len2 + 1);
	return (res);
}
