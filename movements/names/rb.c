/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanadil <acanadil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 17:43:01 by acanadil          #+#    #+#             */
/*   Updated: 2026/02/19 17:43:15 by acanadil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "movements.h"
#include "printf.h"

void	rb(t_stack *stack)
{
	t_bench	*bench;

	bench = stack->calc;
	if (rotate(&stack->stackb))
	{
		ft_printf("rb\n");
		bench->rb++;
	}
}
