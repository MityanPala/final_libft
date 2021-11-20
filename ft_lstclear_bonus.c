/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcoralie <gcoralie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 21:38:21 by gcoralie          #+#    #+#             */
/*   Updated: 2021/11/13 22:12:03 by gcoralie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*head;

	if (lst == NULL)
		return ;
	while (*lst != NULL)
	{
		del((*lst)->content);
		head = (*lst)->next;
		free(*lst);
		*lst = head;
	}
	*lst = NULL;
}
