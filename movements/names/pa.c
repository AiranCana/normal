/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanadil <acanadil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 17:29:59 by acanadil          #+#    #+#             */
/*   Updated: 2026/02/19 18:12:17 by acanadil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "movements.h"
#include "printf.h"

void	pa(t_stack *stack)
{
	t_bench	*bench;

	bench = stack->calc;
	if (push(&stack->stackb, &stack->stacka))
	{
		ft_printf("pa\n");
		bench->pa++;
		bench->total++;
	}
}
