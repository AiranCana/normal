/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   basic_ mov_2stacks.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanadil <acanadil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 15:49:01 by acanadil          #+#    #+#             */
/*   Updated: 2026/02/24 15:18:35 by acanadil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../movements.h"

int	revrotateall(t_stack **stack)
{
	if (revrotate(&(*stack)->stacka))
	{
		if (revrotate(&(*stack)->stackb))
			return (1);
		else
			rotate(&(*stack)->stacka);
	}
	return (0);
}

int	rotateall(t_stack **stack)
{
	if (rotate(&(*stack)->stacka))
	{
		if (rotate(&(*stack)->stackb))
			return (1);
		else
			revrotate(&(*stack)->stacka);
	}
	return (0);
}

int	swapall(t_stack **stack)
{
	if (swap(&(*stack)->stacka))
	{
		if (swap(&(*stack)->stackb))
			return (1);
		else
			swap(&(*stack)->stacka);
	}
	return (0);
}