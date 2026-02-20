/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rr.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanadil <acanadil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 17:46:52 by acanadil          #+#    #+#             */
/*   Updated: 2026/02/20 11:19:33 by acanadil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "movements.h"
#include "printf.h"

void	rr(t_stack **stack)
{
	t_bench	*bench;

	bench = (*stack)->calc;
	if (rotateall(stack))
	{
		ft_printf("rr\n");
		bench->rr++;
		bench->total++;
	}
}
