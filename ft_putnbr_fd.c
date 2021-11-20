/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcoralie <gcoralie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 10:40:33 by gcoralie          #+#    #+#             */
/*   Updated: 2021/11/13 21:28:02 by gcoralie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putnbr_fd(int n, int fd)
{
	long long	lln;

	lln = n;
	if (lln < 0)
	{
		ft_putchar_fd('-', fd);
		lln = lln * (-1);
	}
	if (lln / 10 != 0)
		ft_putnbr_fd(lln / 10, fd);
	ft_putchar_fd((lln % 10) + '0', fd);
}
