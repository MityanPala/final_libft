/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcoralie <gcoralie@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 23:17:05 by gcoralie          #+#    #+#             */
/*   Updated: 2021/11/08 13:32:22 by gcoralie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		len;
	int		str_len;
	char	uc;

	uc = (char)c;
	str_len = ft_strlen(s);
	if (uc == '\0')
		return ((char *)(s + str_len));
	len = 0;
	while (len < str_len)
	{
		if (*(s + len) == uc)
			return ((char *)(s + len));
		++len;
	}
	return (NULL);
}
