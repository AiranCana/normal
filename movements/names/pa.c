/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanadil <acanadil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 17:29:59 by acanadil          #+#    #+#             */
/*   Updated: 2026/02/20 13:22:11 by acanadil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../movements.h"

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
