/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   revrotateall.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanadil <acanadil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 15:49:01 by acanadil          #+#    #+#             */
/*   Updated: 2026/02/23 11:06:18 by acanadil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../movements.h"

int	revrotateall(t_stack **stack)
{
	if (revrotate(&(*stack)->stacka))
	{
		if (revrotate(&(*stack)->stackb))
			return (1);
		else
			rotate(&(*stack)->stacka);
	}
	return (0);
}
