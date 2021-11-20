/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcoralie <gcoralie@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 23:32:13 by gcoralie          #+#    #+#             */
/*   Updated: 2021/11/08 13:32:27 by gcoralie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		len;
	char	uc;

	uc = (char)c;
	len = ft_strlen(s);
	if (uc == '\0')
		return ((char *)(s + len));
	while (len > 0)
	{
		--len;
		if (*(s + len) == uc)
			return ((char *)(s + len));
	}
	return (NULL);
}
