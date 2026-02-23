/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanadil <acanadil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 15:24:15 by acanadil          #+#    #+#             */
/*   Updated: 2026/02/23 12:39:21 by acanadil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../movements.h"

int	swap(t_list **stack)
{
	t_list	*aux;

	if (!stack && !(*stack) || !(*stack)->next)
		return (0);
	aux = (*stack)->next;
	(*stack)->next = aux->next;
	ft_lstadd_front(stack, aux);
	return (1);
}
