/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ss.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanadil <acanadil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 17:28:47 by acanadil          #+#    #+#             */
/*   Updated: 2026/02/20 13:44:09 by acanadil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../movements.h"

void	ss(t_stack **stack)
{
	t_bench	*bench;

	bench = (*stack)->calc;
	if (swapall(stack))
	{
		write(1, "ss\n", 3);
		bench->ss++;
		bench->total++;
	}
}
