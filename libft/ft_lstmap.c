/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanadil <acanadil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 19:33:16 by acanadil          #+#    #+#             */
/*   Updated: 2026/02/20 12:55:56 by acanadil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	iscreate(t_list *lst, int f(int), t_list **list)
{
	t_list	*aux;

	while (lst)
	{
		aux = ft_lstnew(0);
		if (!aux)
			return (1);
		aux -> num = f(lst -> num);
		ft_lstadd_back(list, aux);
		lst = lst -> next;
	}
	return (0);
}

t_list	*ft_lstmap(t_list *lst, int f(int))
{
	t_list	*list;

	list = NULL;
	if (!lst || !f)
		return (NULL);
	if (iscreate(lst, f, &list))
	{
		ft_lstclear(&list);
		return (NULL);
	}
	return (list);
}
