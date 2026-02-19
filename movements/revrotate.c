/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   revrotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanadil <acanadil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 13:21:23 by acanadil          #+#    #+#             */
/*   Updated: 2026/02/19 15:11:21 by acanadil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	revrotate(t_list **stack)
{
	t_list	*aux;
	t_list	*iter;

	iter = *stack;
	aux = ft_lstlast(stack);
	while (iter->next == aux)
	{
		iter = iter->next;
	}
	iter->next = NULL;
	ft_lstadd_front(stack, aux);
}
