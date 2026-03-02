/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqroca- <raqroca-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/02 11:02:07 by raqroca-          #+#    #+#             */
/*   Updated: 2026/03/02 11:06:33 by raqroca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
