/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanadil <acanadil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 17:38:15 by acanadil          #+#    #+#             */
/*   Updated: 2026/02/19 17:38:41 by acanadil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "movements.h"
#include "printf.h"

void	pb(t_stack *stack)
{
	t_bench	*bench;

	bench = stack->calc;
	if (push(&stack->stacka, &stack->stackb))
	{
		ft_printf("pb\n");
		bench->pb++;
	}
}
