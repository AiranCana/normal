/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrb.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanadil <acanadil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 17:53:44 by acanadil          #+#    #+#             */
/*   Updated: 2026/02/19 18:12:48 by acanadil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "movements.h"
#include "printf.h"

void	rrb(t_stack *stack)
{
	t_bench	*bench;

	bench = stack->calc;
	if (revrotate(&stack->stackb))
	{
		ft_printf("rrb\n");
		bench->rrb++;
		bench->total++;
	}
}
