/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   revrotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanadil <acanadil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 13:21:23 by acanadil          #+#    #+#             */
/*   Updated: 2026/02/19 15:51:45 by acanadil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "movements.h"

int	revrotate(t_list **stack)
{
	t_list	*aux;
	t_list	*iter;

	if (!(*stack) || !(*stack)->next)
		return (0);
	iter = *stack;
	aux = ft_lstlast(stack);
	while (iter->next == aux)
	{
		iter = iter->next;
	}
	iter->next = NULL;
	ft_lstadd_front(stack, aux);
	return (1);
}
