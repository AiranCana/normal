/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanadil <acanadil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 17:48:18 by acanadil          #+#    #+#             */
/*   Updated: 2026/02/19 17:48:58 by acanadil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "movements.h"
#include "printf.h"

void	rra(t_stack *stack)
{
	t_bench	*bench;

	bench = stack->calc;
	if (revrotate(&stack->stacka))
	{
		ft_printf("rra\n");
		bench->rra++;
	}
}
