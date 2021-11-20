/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcoralie <gcoralie@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 10:09:59 by gcoralie          #+#    #+#             */
/*   Updated: 2021/11/12 15:30:58 by gcoralie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
#include <stdlib.h>

static void		gc_reverse_str(char *s);
static size_t	gc_calc_len(int n);

char	*ft_itoa(int n)
{
	char			*res;
	char			*buf;
	unsigned int	un;

	res = (char *)malloc(sizeof(char) * (gc_calc_len(n) + 1));
	if (res == NULL)
		return (NULL);
	*(res + gc_calc_len(n)) = '\0';
	buf = res;
	un = n;
	if (n < 0)
		un = n * (-1);
	if (n == 0)
		*buf = '0';
	while (un > 0)
	{
		*buf = (char)(un % 10 + '0');
		un = un / 10;
		++buf;
	}
	if (n < 0)
		*buf = '-';
	gc_reverse_str(res);
	return (res);
}

static size_t	gc_calc_len(int n)
{
	size_t			len;
	unsigned int	un;

	len = 0;
	un = n;
	if (n < 0)
	{
		un = n * (-1);
		++len;
	}
	if (n == 0)
		++len;
	while (un > 0)
	{
		un = un / 10;
		++len;
	}
	return (len);
}

static void	gc_reverse_str(char *s)
{
	size_t	len;
	size_t	mid;
	size_t	i;
	char	buff;

	len = ft_strlen(s);
	mid = len / 2 + len % 2;
	i = 0;
	while (i < mid)
	{
		buff = *(s + i);
		*(s + i) = *(s + len - 1 - i);
		*(s + len - 1 - i) = buff;
		++i;
	}
}
