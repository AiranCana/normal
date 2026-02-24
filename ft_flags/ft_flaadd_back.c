/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flaadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanadil <acanadil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 11:00:12 by acanadil          #+#    #+#             */
/*   Updated: 2026/02/24 11:01:16 by acanadil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_flags.h"

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
