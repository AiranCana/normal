/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanadil <acanadil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 16:49:29 by acanadil          #+#    #+#             */
/*   Updated: 2026/02/23 11:01:41 by acanadil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../movements.h"

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
