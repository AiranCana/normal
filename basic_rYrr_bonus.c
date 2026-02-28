/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   basic_r&rr_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanadil <acanadil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 17:39:50 by acanadil          #+#    #+#             */
/*   Updated: 2026/02/27 12:16:15 by acanadil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "movements.h"

void	ra_bonus(t_stack **stack)
{
	t_bench	*bench;

	bench = (*stack)->calc;
	if (rotate(&(*stack)->stacka))
	{
		bench->ra++;
		bench->total++;
	}
}

void	rb_bonus(t_stack **stack)
{
	t_bench	*bench;

	bench = (*stack)->calc;
	if (rotate(&(*stack)->stackb))
	{
		bench->rb++;
		bench->total++;
	}
}

void	rra_bonus(t_stack **stack)
{
	t_bench	*bench;

	bench = (*stack)->calc;
	if (revrotate(&(*stack)->stacka))
	{
		bench->rra++;
		bench->total++;
	}
}

void	rrb_bonus(t_stack **stack)
{
	t_bench	*bench;

	bench = (*stack)->calc;
	if (revrotate(&(*stack)->stackb))
	{
		bench->rrb++;
		bench->total++;
	}
}
