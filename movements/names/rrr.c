/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrr.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanadil <acanadil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 17:49:08 by acanadil          #+#    #+#             */
/*   Updated: 2026/02/19 18:12:51 by acanadil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "movements.h"
#include "printf.h"

void	rrr(t_stack *stack)
{
	t_bench	*bench;

	bench = stack->calc;
	if (revrotateall(&stack))
	{
		ft_printf("rrr\n");
		bench->rrr++;
		bench->total++;
	}
}
