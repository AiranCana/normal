/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanadil <acanadil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 13:18:24 by acanadil          #+#    #+#             */
/*   Updated: 2026/02/19 13:35:42 by acanadil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rotate(t_list **stack)
{
	t_list	*aux;

	aux = *stack;
	(*stack) = aux->next;
	aux->next = NULL;
	ft_lstadd_back(stack, aux);
}
