/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanadil <acanadil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 19:33:10 by acanadil          #+#    #+#             */
/*   Updated: 2026/02/20 12:55:39 by acanadil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, int f(int))
{
	if (!lst)
		return ;
	while (lst -> next)
	{
		f(lst -> num);
		lst = lst -> next;
	}
	f(lst -> num);
	return ;
}
