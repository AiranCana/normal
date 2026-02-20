/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swapall.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanadil <acanadil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 15:24:15 by acanadil          #+#    #+#             */
/*   Updated: 2026/02/20 11:32:00 by acanadil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "movements.h"

int	swapall(t_stack **stack)
{
	if (swap(&(*stack)->stacka))
	{
		if (swap(&(*stack)->stackb))
			return (1);
		else
			swap(&(*stack)->stacka);
	}
	return (0);
}
