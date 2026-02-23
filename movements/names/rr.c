/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rr.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanadil <acanadil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 17:46:52 by acanadil          #+#    #+#             */
/*   Updated: 2026/02/20 13:24:06 by acanadil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../movements.h"

void	rr(t_stack **stack)
{
	t_bench	*bench;

	bench = (*stack)->calc;
	if (rotateall(stack))
	{
		write(1, "rr\n", 3);
		bench->rr++;
		bench->total++;
	}
}
