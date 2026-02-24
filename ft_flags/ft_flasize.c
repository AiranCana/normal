/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flasize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanadil <acanadil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 10:50:55 by acanadil          #+#    #+#             */
/*   Updated: 2026/02/24 11:00:43 by acanadil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_flags.h"

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
