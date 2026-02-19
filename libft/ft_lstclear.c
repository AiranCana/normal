/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanadil <acanadil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 19:33:04 by acanadil          #+#    #+#             */
/*   Updated: 2026/02/19 12:17:02 by acanadil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	clean(t_list *lst)
{
	if (lst -> next)
		clean(lst -> next);
	free(lst);
}

void	ft_lstclear(t_list **lst)
{
	if (!lst || !*lst)
		return ;
	clean(*lst);
	*lst = NULL;
}
