/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcoralie <gcoralie@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 02:39:57 by gcoralie          #+#    #+#             */
/*   Updated: 2021/11/12 02:48:17 by gcoralie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	len;
	unsigned int	i;

	if (s == NULL || f == NULL)
		return ;
	len = (unsigned int)ft_strlen(s);
	i = 0;
	while (i < len)
	{
		f(i, (s + i));
		++i;
	}
}
