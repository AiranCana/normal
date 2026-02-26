/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flags_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanadil <acanadil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 12:33:57 by acanadil          #+#    #+#             */
/*   Updated: 2026/02/26 12:12:08 by acanadil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_flags.h"

static void	clean(t_flags *lst)
{
	if (lst -> next)
		clean(lst -> next);
	free(lst);
}

void	ft_flaclear(t_flags **lst)
{
	if (!lst || !*lst)
		return ;
	clean(*lst);
	*lst = NULL;
}

void	ft_flaadd_back(t_flags **lst, t_flags *new)
{
	t_flags	*list;

	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	if (lst && new)
	{
		list = *lst;
		while (list->next)
			list = list -> next;
		list->next = new;
	}
}

t_flags	*ft_flanew(int content, int pos, char *fla)
{
	t_flags	*new;

	new = malloc(sizeof (t_flags));
	if (!new)
		return (NULL);
	new -> num = content;
	new -> pos = pos;
	new -> next = NULL;
	new -> flag = fla;
	return (new);
}

int	ft_flasize(t_flags *lst)
{
	int		count;
	t_flags	*list;

	count = 0;
	if (!lst)
		return (0);
	++count;
	list = lst;
	while (list -> next)
	{
		++count;
		list = list -> next;
	}
	return (count);
}
