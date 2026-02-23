/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simple.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqroca- <raqroca-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/20 10:41:14 by raqroca-          #+#    #+#             */
/*   Updated: 2026/02/23 17:24:56 by raqroca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	simple(t_stack **stack)
{
	int	min;
	int	pos;
	int	size;

	if (!stack || !(*stack) || !(*stack)->stacka)
		return ;
	while ((*stack)->stacka && !is_sorted((*stack)->stacka))//no emty no order
	{
		size = ft_lstsize((*stack)->stacka);
		min = get_min((*stack)->stacka);
		pos = get_position((*stack)->stacka, min);
		if ((*stack)->stackb != NULL)// b not empty
		{
			if (pos <= size / 2)//first half
			{
				while ((*stack)->stacka->num != min)
					rr(*stack);
			}
			else//second half
			{
				while ((*stack)->stacka->num != min)
					rrr(*stack);
			}
		}
		else// empty b
		{
			if (pos <= size / 2)//first half- a up
			{
				while ((*stack)->stacka->num != min)
					ra(*stack);
			}
			else
			{//second half
				while ((*stack)->stacka->num != min)
					rra(*stack);
			}
		}
		pb(*stack);// pass min b
	}
	while ((*stack)->stackb != NULL)//return a and b, in order asc
		pa(*stack);
}
