/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swapall.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanadil <acanadil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 15:24:15 by acanadil          #+#    #+#             */
/*   Updated: 2026/02/19 13:12:53 by acanadil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
#include "movements.h"

void	swapall(t_stack **stack)
{
	swap(&(*stack)->stacka);
	swap(&(*stack)->stackb);
}
