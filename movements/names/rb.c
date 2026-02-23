/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanadil <acanadil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 17:43:01 by acanadil          #+#    #+#             */
/*   Updated: 2026/02/20 13:23:46 by acanadil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../movements.h"

void	rb(t_stack **stack)
{
	t_bench	*bench;

	bench = (*stack)->calc;
	if (rotate(&(*stack)->stackb))
	{
		write(1, "rb\n", 3);
		bench->rb++;
		bench->total++;
	}
}
