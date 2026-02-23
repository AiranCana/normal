/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanadil <acanadil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 17:38:15 by acanadil          #+#    #+#             */
/*   Updated: 2026/02/20 13:23:52 by acanadil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../movements.h"

void	pb(t_stack **stack)
{
	t_bench	*bench;

	bench = (*stack)->calc;
	if (push(&(*stack)->stacka, &(*stack)->stackb))
	{
		write(1, "pb\n", 3);
		bench->pb++;
		bench->total++;
	}
}
