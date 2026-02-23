/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotateall.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanadil <acanadil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 15:45:57 by acanadil          #+#    #+#             */
/*   Updated: 2026/02/23 11:06:41 by acanadil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../movements.h"

int	rotateall(t_stack **stack)
{
	if (rotate(&(*stack)->stacka))
	{
		if (rotate(&(*stack)->stackb))
			return (1);
		else
			revrotate(&(*stack)->stacka);
	}
	return (0);
}
