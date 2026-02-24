/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   basic_s&p.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanadil <acanadil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 17:28:01 by acanadil          #+#    #+#             */
/*   Updated: 2026/02/24 15:33:54 by acanadil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "movements.h"

void	sb(t_stack **stack)
{
	t_bench	*bench;

	bench = (*stack)->calc;
	if (swap(&(*stack)->stackb))
	{
		write(1, "sb\n", 3);
		bench->sb++;
		bench->total++;
	}
}

void	sa(t_stack **stack)
{
	t_bench	*bench;

	bench = (*stack)->calc;
	if (swap(&(*stack)->stacka))
	{
		write(1, "sa\n", 3);
		bench->sa++;
		bench->total++;
	}
}

void	pa(t_stack **stack)
{
	t_bench	*bench;

	bench = (*stack)->calc;
	if (push(&(*stack)->stackb, &(*stack)->stacka))
	{
		write(1, "pa\n", 3);
		bench->pa++;
		bench->total++;
	}
}

void	pb(t_stack **stack)
{
	t_bench	*bench;

	bench = (*stack)->calc;
	if (push(&(*stack)->stacka, &(*stack)->stackb))
	{
		write(1, "pb\n", 3);
		bench->pb++;
		bench->total++;
	}
}
