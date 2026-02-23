/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanadil <acanadil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 17:48:18 by acanadil          #+#    #+#             */
/*   Updated: 2026/02/20 13:43:01 by acanadil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../movements.h"

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
