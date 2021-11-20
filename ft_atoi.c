/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcoralie <gcoralie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 18:34:27 by gcoralie          #+#    #+#             */
/*   Updated: 2021/11/13 21:24:45 by gcoralie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static const char	*gc_skip_spaces(const char *ptr);
static int			gc_is_space(int c);

int	ft_atoi(const char *nptr)
{
	int	sign;
	int	res;

	sign = 1;
	res = 0;
	nptr = gc_skip_spaces(nptr);
	if (*nptr == '\0')
		return (0);
	if (*nptr == '-')
		sign = -1;
	if (*nptr == '-' || *nptr == '+')
		++nptr;
	while (*nptr == '0')
		++nptr;
	while (*nptr != '\0' && ft_isdigit((int)*nptr) != 0)
	{
		res = res * 10 + ((int)*nptr - (int) '0');
		++nptr;
	}
	res = res * sign;
	return (res);
}

static const char	*gc_skip_spaces(const char *ptr)
{
	while (*ptr != '\0')
	{
		if (gc_is_space((int)*ptr) == 0)
			break ;
		++ptr;
	}
	return (ptr);
}

static int	gc_is_space(int c)
{
	if (c == (int) ' ' || c == (int) '\f' || c == (int) '\n'
		|| c == (int) '\r' || c == (int) '\t' || c == (int) '\v')
	{
		return (1);
	}
	return (0);
}
