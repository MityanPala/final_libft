/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcoralie <gcoralie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 02:31:54 by gcoralie          #+#    #+#             */
/*   Updated: 2021/11/13 21:25:00 by gcoralie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
#include <stdlib.h>

/* NMEMB elements of SIZE bytes each*/
void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*res;
	size_t	check;

	if (nmemb == 0 || size == 0)
	{
		res = malloc(0);
		if (res == NULL)
			return (NULL);
		return (res);
	}
	check = (size_t)(-1) / nmemb;
	if (size > check)
		return (NULL);
	res = malloc(nmemb * size);
	if (res == NULL)
		return (NULL);
	ft_bzero(res, nmemb * size);
	return (res);
}
