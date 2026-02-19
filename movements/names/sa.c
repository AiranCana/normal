/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanadil <acanadil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 16:49:29 by acanadil          #+#    #+#             */
/*   Updated: 2026/02/19 17:40:54 by acanadil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "movements.h"
#include "printf.h"

void	sa(t_stack *stack)
{
	t_bench	*bench;

	bench = stack->calc;
	if (swap(&stack->stacka))
	{
		ft_printf("sa\n");
		bench->sa++;
	}
}
