/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanadil <acanadil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 12:57:52 by acanadil          #+#    #+#             */
/*   Updated: 2026/02/24 11:29:15 by acanadil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../movements.h"

int	push(t_list **stack, t_list **dest)
{
	t_list	*aux;

	if (!stack || !(*stack))
		return (0);
	aux = *stack;
	*stack = (*stack)->next;
	ft_lstadd_front(dest, aux);
	return (1);
}
