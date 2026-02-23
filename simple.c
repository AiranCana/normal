/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simple.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqroca- <raqroca-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/20 10:41:14 by raqroca-          #+#    #+#             */
/*   Updated: 2026/02/23 18:01:33 by raqroca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
/*
sort_three: sorted - first bigger - second bigger - third bigger(else)

simple:
	- loop until a is empty or sorted
	- if only 3 items left sort them quickly and exit loop
	- find the smallest number and its position in a
	- if its in the first half rotate up (ra)
	- otherwise rotate down (rra) to bring it to the top
	- move the smallest element to stack b
	- return everything to Stack A in the correct order
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
	int	min;
	int	pos;
	int	size;

	if (!stack || !(*stack) || !(*stack)->stacka)
		return ;
	while ((*stack)->stacka && !is_sorted((*stack)->stacka))
	{
		size = ft_lstsize((*stack)->stacka);
		if (size == 3)
		{
			sort_three(stack);
			break ;
		}
		min = get_min((*stack)->stacka);
		pos = get_position((*stack)->stacka, min);
		if (pos <= size / 2)
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
	while ((*stack)->stackb != NULL)
		pa(*stack);
}
