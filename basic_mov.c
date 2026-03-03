/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   basic_mov.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanadil <acanadil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 12:57:52 by acanadil          #+#    #+#             */
/*   Updated: 2026/03/03 12:10:00 by acanadil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "movements.h"

int	push(t_list **stack, t_list **dest)
{
	t_list	*aux;

	if (!stack || !(*stack))
		return (0);
	aux = *stack;
	*stack = (*stack)->next;
	ft_lstadd_front(dest, aux);
	return (1);
}

int	revrotate(t_list **stack)
{
	t_list	*aux;
	t_list	*iter;

	if (!stack || !(*stack) || !(*stack)->next)
		return (0);
	iter = *stack;
	aux = ft_lstlast(*stack);
	while (iter->next != aux)
	{
		iter = iter->next;
	}
	iter->next = NULL;
	ft_lstadd_front(stack, aux);
	return (1);
}

int	rotate(t_list **stack)
{
	t_list	*aux;

	if (!stack || !(*stack) || !(*stack)->next)
		return (0);
	aux = *stack;
	(*stack) = aux->next;
	aux->next = NULL;
	ft_lstadd_back(stack, aux);
	return (1);
}

int	swap(t_list **stack)
{
	t_list	*aux;

	if (!stack || !(*stack) || !(*stack)->next)
		return (0);
	aux = (*stack)->next;
	(*stack)->next = aux->next;
	ft_lstadd_front(stack, aux);
	return (1);
}
