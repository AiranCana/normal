/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqroca- <raqroca-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/20 12:17:52 by raqroca-          #+#    #+#             */
/*   Updated: 2026/02/20 12:46:02 by raqroca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_min(t_list *stack)
{
	int	min;

	if (!stack)
		return (0);
	min = stack->num;
	while (stack)
	{
		if (stack->num < min)
			min = stack->num;
		stack = stack->next;
	}
	return (min);
}

int	get_max(t_list *stack)
{
	int	max;

	if (!stack)
		return (0);
	max = stack->num;
	while (stack)
	{
		if (stack->num > max)
			max = stack->num;
		stack = stack->next;
	}
	return (max);
}

int	is_sorted(t_list *stack)
{
	while (stack && stack->next)
	{
		if (stack->num > stack->next->num)
			return (0);
		stack = stack->next;
	}
	return (1);
}

int	get_position(t_list *stack, int value)
{
	int	position;

	if (!stack)
		return (-1);
	position = 0;
	while (stack)
	{
		if (stack->num == value)
			return (position);
		position++;
		stack = stack->next;
	}
	return (-1);
}

void free_stack(t_stack **stack)
{
    if (!stack || !(*stack))
        return;
    ft_lstclear(&((*stack)->stacka));// free stacka
    ft_lstclear(&((*stack)->stackb));//free stackb
    free((*stack)->calc);//free t_bench
    free(*stack);//free t_stack
    *stack = NULL;// Paso 5: Marcar NULL
}
