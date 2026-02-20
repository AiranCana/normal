/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   makemove.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanadil <acanadil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/20 11:07:34 by acanadil          #+#    #+#             */
/*   Updated: 2026/02/20 11:40:35 by acanadil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "movements.h"

void	makemove(t_stack **order, char *move)
{
	if (strverif(move, "sa"))
		sa(order);
	else if (strverif(move, "sb"))
		sb(order);
	else if (strverif(move, "ss"))
		ss(order);
	else if (strverif(move, "pa"))
		pa(order);
	else if (strverif(move, "pb"))
		pb(order);
	else if (strverif(move, "ra"))
		ra(order);
	else if (strverif(move, "rb"))
		rb(order);
	else if (strverif(move, "rr"))
		rr(order);
	else if (strverif(move, "rra"))
		rra(order);
	else if (strverif(move, "rrb"))
		rrb(order);
	else if (strverif(move, "rrr"))
		rrr(order);
}
