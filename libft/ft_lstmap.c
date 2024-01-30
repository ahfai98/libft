/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyap <jyap@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 17:31:31 by jyap              #+#    #+#             */
/*   Updated: 2024/01/04 14:56:39 by jyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlist;
	t_list	*newlist_first;

	if (!lst || !f || !del)
		return (NULL);
	newlist = ft_lstnew((*f)(lst->content));
	if (newlist == NULL)
		return (NULL);
	newlist_first = newlist;
	lst = lst->next;
	while (lst != NULL)
	{
		newlist->next = ft_lstnew((*f)(lst->content));
		if (newlist->next == NULL)
			return (NULL);
		newlist = newlist->next;
		lst = lst->next;
	}
	return (newlist_first);
}
