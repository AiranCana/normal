/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   revrotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanadil <acanadil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 13:21:23 by acanadil          #+#    #+#             */
/*   Updated: 2026/02/23 12:37:57 by acanadil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../movements.h"

int	revrotate(t_list **stack)
{
	t_list	*aux;
	t_list	*iter;

	if (!stack && !(*stack) || !(*stack)->next)
		return (0);
	iter = *stack;
	aux = ft_lstlast(*stack);
	while ((*stack)->next != aux)
	{
		*stack = (*stack)->next;
	}
	(*stack)->next = NULL;
	*stack = iter;
	ft_lstadd_front(stack, aux);
	return (1);
}
