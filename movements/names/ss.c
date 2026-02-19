/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ss.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanadil <acanadil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 17:28:47 by acanadil          #+#    #+#             */
/*   Updated: 2026/02/19 17:29:32 by acanadil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "movements.h"
#include "printf.h"

void	ss(t_stack *stack)
{
	t_bench	*bench;

	bench = stack->calc;
	if (swapall(&stack))
	{
		ft_printf("ss\n");
		bench->ss++;
	}
}
