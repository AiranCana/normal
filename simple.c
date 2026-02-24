/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simple.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqroca- <raqroca-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/20 10:41:14 by raqroca-          #+#    #+#             */
/*   Updated: 2026/02/24 11:24:38 by raqroca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
/*
sort_three: sorted - first bigger - second bigger - third bigger(else)

simple:
	- The goal is to reduce stack A until only 3 elements remain.
	- In each iteration, find the smallest number (min) in A.
	- Calculate the distance from min to the top to choose the shortest path:
    - If it is in the first half, use normal rotation (ra).
	- If it is in the second half, use reverse rotation (rra).
	- Send the smallest element to B (pb).
	- Once there are 3 elements left, apply a specific sort (sort_three).
	- Finally, return all elements from B to A (pa) already sorted.
*/
void	sort_three(t_stack **stack)
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
		ra(*stack);
		if ((*stack)->stacka->num > (*stack)->stacka->next->num)
			sa(*stack);
	}
	else if (second > first && second > third)
	{
		rra(*stack);
		if ((*stack)->stacka->num > (*stack)->stacka->next->num)
			sa(*stack);
	}
	else
	{
		sa(*stack);
	}
}

void	simple(t_stack **stack)
{
	int	current_size;
	int	min;
	int	pos;

	if (!stack || !(*stack) || !(*stack)->stacka)
		return ;
	while (ft_lstsize((*stack)->stacka) > 3 && !is_sorted((*stack)->stacka))
	{
		current_size = ft_lstsize((*stack)->stacka);
		min = get_min((*stack)->stacka);
		pos = get_position((*stack)->stacka, min);
		if (pos <= current_size / 2)
		{
			while ((*stack)->stacka->num != min)
				ra(*stack);
		}
		else
		{
			while ((*stack)->stacka->num != min)
				rra(*stack);
		}
		pb(*stack);
	}
	if (!is_sorted((*stack)->stacka))
		sort_three(stack);
	while ((*stack)->stackb != NULL)
		pa(*stack);
}
