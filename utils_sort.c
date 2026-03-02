/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqroca- <raqroca-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/02 11:02:07 by raqroca-          #+#    #+#             */
/*   Updated: 2026/03/02 17:02:55 by raqroca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
/*
sort_three: sorted - first bigger - second bigger - third bigger(else)

** assign_pos
** Calculates and assigns a relative rank (0 to N-1) to each node.
** It stores this rank in the 'pos' field of the structure, allowing 
** the Radix algorithm to sort based on relative order rather than 
** the raw 'num' values, which could be negative or very large.
*/

static void	sort_three(t_stack **stack)
{
	int	first;
	int	second;
	int	third;

	first = (*stack)->stacka->num;
	second = (*stack)->stacka->next->num;
	third = (*stack)->stacka->next->next->num;
	if (first < second && second < third)
		return ;
	if (first > second && first > third)
	{
		ra(stack);
		if ((*stack)->stacka->num > (*stack)->stacka->next->num)
			sa(stack);
	}
	else if (second > first && second > third)
	{
		rra(stack);
		if ((*stack)->stacka->num > (*stack)->stacka->next->num)
			sa(stack);
	}
	else
	{
		sa(stack);
	}
}

void	tiny_sort(t_stack **stack)
{
	int	size;

	size = ft_lstsize((*stack)->stacka);
	if (size == 1 || is_sorted((*stack)->stacka))
		return ;
	if (size == 2)
	{
		if ((*stack)->stacka->num > (*stack)->stacka->next->num)
			sa(stack);
	}
	else if (size == 3)
	{
		sort_three(stack);
	}
}

void	assign_pos(t_list *stacka)
{
	t_list	*current;
	t_list	*compare;
	int		count;

	current = stacka;
	while (current != NULL)
	{
		count = 0;
		compare = stacka;
		while (compare != NULL)
		{
			if (compare->num < current->num)
				count++;
			compare = compare->next;
		}
		current->pos = count;
		current = current->next;
	}
}
