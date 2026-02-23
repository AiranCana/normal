/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanadil <acanadil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 17:39:50 by acanadil          #+#    #+#             */
/*   Updated: 2026/02/20 13:23:50 by acanadil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../movements.h"

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
