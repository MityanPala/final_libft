/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcoralie <gcoralie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 20:17:13 by gcoralie          #+#    #+#             */
/*   Updated: 2021/11/13 20:25:55 by gcoralie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstnew(void *content)
{
	t_list	*item;

	item = (t_list *)malloc(sizeof(t_list));
	if (item == NULL)
		return (NULL);
	item->content = content;
	item->next = NULL;
	return (item);
}
