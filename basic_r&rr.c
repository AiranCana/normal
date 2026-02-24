/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   basic_r&rr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanadil <acanadil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 17:39:50 by acanadil          #+#    #+#             */
/*   Updated: 2026/02/24 15:33:28 by acanadil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "movements.h"

void	ra(t_stack **stack)
{
	t_bench	*bench;

	bench = (*stack)->calc;
	if (rotate(&(*stack)->stacka))
	{
		write(1, "ra\n", 3);
		bench->ra++;
		bench->total++;
	}
}

void	rb(t_stack **stack)
{
	t_bench	*bench;

	bench = (*stack)->calc;
	if (rotate(&(*stack)->stackb))
	{
		write(1, "rb\n", 3);
		bench->rb++;
		bench->total++;
	}
}

void	rra(t_stack **stack)
{
	t_bench	*bench;

	bench = (*stack)->calc;
	if (revrotate(&(*stack)->stacka))
	{
		write(1, "rra\n", 4);
		bench->rra++;
		bench->total++;
	}
}

void	rrb(t_stack **stack)
{
	t_bench	*bench;

	bench = (*stack)->calc;
	if (revrotate(&(*stack)->stackb))
	{
		write(1, "rrb\n", 4);
		bench->rrb++;
		bench->total++;
	}
}
