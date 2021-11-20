/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcoralie <gcoralie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 13:48:27 by gcoralie          #+#    #+#             */
/*   Updated: 2021/11/13 21:29:56 by gcoralie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
#include <stdlib.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t		len;
	char		*res;

	if (s1 == NULL || set == NULL)
		return (NULL);
	if (ft_strlen(s1) == 0 || ft_strlen(set) == 0)
		return (ft_strdup(s1));
	while (*s1 != '\0' && ft_strchr(set, *s1) != NULL)
		++s1;
	len = ft_strlen(s1);
	if (len == 0)
		return (ft_strdup(""));
	while (len > 0 && ft_strchr(set, *(s1 + len - 1)) != NULL)
		--len;
	res = (char *)malloc(sizeof(char) * (len + 1));
	if (res == NULL)
		return (NULL);
	ft_strlcpy(res, s1, len + 1);
	return (res);
}
