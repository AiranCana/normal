/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanadil <acanadil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 17:28:01 by acanadil          #+#    #+#             */
/*   Updated: 2026/02/20 11:13:53 by acanadil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "movements.h"
#include "printf.h"

void	sb(t_stack **stack)
{
	t_bench	*bench;

	bench = (*stack)->calc;
	if (swap(&(*stack)->stackb))
	{
		ft_printf("sb\n");
		bench->sb++;
		bench->total++;
	}
}
