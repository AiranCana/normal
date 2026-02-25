/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   adaptiv.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqroca- <raqroca-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 10:39:16 by raqroca-          #+#    #+#             */
/*   Updated: 2026/02/25 10:52:09 by raqroca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	adaptiv(t_stack **stack)
{
	float	actual_disorder;

	if (!stack || !(*stack) || !(*stack)->stacka)
		return ;
	actual_disorder = disorder((*stack)->stacka);
	if (actual_disorder < 0.2)
		simple(stack);
	else if (actual_disorder < 0.5)
		medium(stack);
	else
		complex(stack);
}
