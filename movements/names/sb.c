/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanadil <acanadil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 17:28:01 by acanadil          #+#    #+#             */
/*   Updated: 2026/02/20 13:44:13 by acanadil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../movements.h"

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
