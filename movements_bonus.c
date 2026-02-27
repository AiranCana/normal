/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movements_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanadil <acanadil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/27 12:44:39 by acanadil          #+#    #+#             */
/*   Updated: 2026/02/27 15:59:16 by acanadil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	makemove(t_stack **order, char *move)
{
	if (strverifall(move, "sa\n"))
		sa_bonus(order);
	else if (strverifall(move, "sb\n"))
		sb_bonus(order);
	else if (strverifall(move, "ss\n"))
		ss_bonus(order);
	else if (strverifall(move, "pa\n"))
		pa_bonus(order);
	else if (strverifall(move, "pb\n"))
		pb_bonus(order);
	else if (strverifall(move, "ra\n"))
		ra_bonus(order);
	else if (strverifall(move, "rb\n"))
		rb_bonus(order);
	else if (strverifall(move, "rr\n"))
		rr_bonus(order);
	else if (strverifall(move, "rra\n"))
		rra_bonus(order);
	else if (strverifall(move, "rrb\n"))
		rrb_bonus(order);
	else if (strverifall(move, "rrr\n"))
		rrr_bonus(order);
}
