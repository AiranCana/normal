/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanadil <acanadil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 13:18:24 by acanadil          #+#    #+#             */
/*   Updated: 2026/02/23 12:39:03 by acanadil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../movements.h"

int	rotate(t_list **stack)
{
	t_list	*aux;

	if (!stack && !(*stack) || !(*stack)->next)
		return (0);
	aux = *stack;
	(*stack) = aux->next;
	aux->next = NULL;
	ft_lstadd_back(stack, aux);
	return (1);
}
