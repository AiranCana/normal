/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanadil <acanadil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 17:39:50 by acanadil          #+#    #+#             */
/*   Updated: 2026/02/19 17:42:45 by acanadil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "movements.h"
#include "printf.h"

void	ra(t_stack *stack)
{
	t_bench	*bench;

	bench = stack->calc;
	if (rotate(&stack->stacka))
	{
		ft_printf("ra\n");
		bench->ra++;
	}
}
