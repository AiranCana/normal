/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simple.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqroca- <raqroca-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/20 10:41:14 by raqroca-          #+#    #+#             */
/*   Updated: 2026/02/20 12:20:20 by raqroca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_three(t_stack **stack)
{
	int	first;
	int	second;
	int	third;

	first = (*stack)->stacka->num;
	second = (*stack)->stacka->next->num;
	third = (*stack)->stacka->next->next->num;
	if (first < second && second < third)//sorted
		return;
	if (first > second && first > third)//first bigger
	{
		ra(*stack);// rorate
		if ((*stack)->stacka->num > (*stack)->stacka->next->num)
			sa(*stack);
	}
	else if (second > first && second > third)//second bigger
	{
		rra(*stack);//reverse rotte
		if ((*stack)->stacka->num > (*stack)->stacka->next->num)
			sa(*stack);
	}
	else//third bigger
	{
		sa(*stack);
	}
}

/**
order 5 numbers:

find the 2 smaller nombers and move to stack b
sort_three
insert de 2 smaller numbers in order
 */

void	sort_five(t_stack **stack)
{
	int	min;
	int	min_pos;
	int	second_min;
	int	i;

	min = get_min((*stack)->stacka);
	min_pos = 0;
	i = 0;
	while ((*stack)->stacka->num != min)
	{
		ra(*stack);
		min_pos++;
	}
	pb(*stack); //push min to B
	second_min = get_min((*stack)->stacka);
	i = 0;
	while ((*stack)->stacka->num != second_min)
	{
		ra(*stack);
		i++;
	}
	pb(*stack);
	sort_three(stack);//sort 3 number left
	pa(*stack); // instr el second-min
	pa(*stack); // inset el min
	if ((*stack)->stacka->num > (*stack)->stacka->next->num)
		sa(*stack);//adjust is is necesary
}

void	simple(t_stack **order)
{
	int	size;

	if (!order || !(*order) || !(*order)->stacka)
		return;
	size = ft_lstsize((*order)->stacka);
	if (is_sorted((*order)->stacka))
		return;
	if (size <= 3)
		sort_three(order);
	else if (size <= 5)
		sort_five(order);
}
