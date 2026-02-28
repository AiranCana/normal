/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mov_2staks_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanadil <acanadil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 17:46:52 by acanadil          #+#    #+#             */
/*   Updated: 2026/02/27 12:15:49 by acanadil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "movements.h"

void	rr_bonus(t_stack **stack)
{
	t_bench	*bench;

	bench = (*stack)->calc;
	if (rotateall(stack))
	{
		bench->rr++;
		bench->total++;
	}
}

void	ss_bonus(t_stack **stack)
{
	t_bench	*bench;

	bench = (*stack)->calc;
	if (swapall(stack))
	{
		bench->ss++;
		bench->total++;
	}
}

void	rrr_bonus(t_stack **stack)
{
	t_bench	*bench;

	bench = (*stack)->calc;
	if (revrotateall(stack))
	{
		bench->rrr++;
		bench->total++;
	}
}
