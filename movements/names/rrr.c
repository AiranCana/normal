/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrr.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanadil <acanadil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 17:49:08 by acanadil          #+#    #+#             */
/*   Updated: 2026/02/20 13:43:34 by acanadil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../movements.h"

void	rrr(t_stack **stack)
{
	t_bench	*bench;

	bench = (*stack)->calc;
	if (revrotateall(stack))
	{
		write(1, "rrr\n", 4);
		bench->rrr++;
		bench->total++;
	}
}
