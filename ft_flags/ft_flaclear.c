/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flaclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanadil <acanadil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 12:33:57 by acanadil          #+#    #+#             */
/*   Updated: 2026/02/24 12:34:51 by acanadil         ###   ########.fr       */
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
