/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   basic_s&p_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanadil <acanadil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 17:28:01 by acanadil          #+#    #+#             */
/*   Updated: 2026/02/27 12:16:01 by acanadil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "movements.h"

void	sb_bonus(t_stack **stack)
{
	t_bench	*bench;

	bench = (*stack)->calc;
	if (swap(&(*stack)->stackb))
	{
		bench->sb++;
		bench->total++;
	}
}

void	sa_bonus(t_stack **stack)
{
	t_bench	*bench;

	bench = (*stack)->calc;
	if (swap(&(*stack)->stacka))
	{
		bench->sa++;
		bench->total++;
	}
}

void	pa_bonus(t_stack **stack)
{
	t_bench	*bench;

	bench = (*stack)->calc;
	if (push(&(*stack)->stackb, &(*stack)->stacka))
	{
		bench->pa++;
		bench->total++;
	}
}

void	pb_bonus(t_stack **stack)
{
	t_bench	*bench;

	bench = (*stack)->calc;
	if (push(&(*stack)->stacka, &(*stack)->stackb))
	{
		bench->pb++;
		bench->total++;
	}
}
