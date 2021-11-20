/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcoralie <gcoralie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 21:47:01 by gcoralie          #+#    #+#             */
/*   Updated: 2021/11/13 22:38:06 by gcoralie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlst;
	t_list	*temp;
	void	*buf;

	newlst = NULL;
	if (lst == NULL)
		return (NULL);
	while (lst != NULL)
	{
		buf = f(lst->content);
		temp = ft_lstnew(buf);
		if (buf != NULL)
			ft_lstadd_back(&newlst, temp);
		else
			del(lst->content);
		lst = lst->next;
	}
	return (newlst);
}
