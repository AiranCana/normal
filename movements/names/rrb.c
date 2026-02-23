/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrb.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanadil <acanadil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 17:53:44 by acanadil          #+#    #+#             */
/*   Updated: 2026/02/20 13:43:20 by acanadil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../movements.h"

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
