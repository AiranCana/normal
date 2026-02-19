/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanadil <acanadil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 12:57:52 by acanadil          #+#    #+#             */
/*   Updated: 2026/02/19 13:33:24 by acanadil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	push(t_list **t_stack, t_list **dest)
{
	t_list	*aux;

	aux = *t_stack;
	(*t_stack)->next = *t_stack;
	ft_lstadd_front(dest, aux);
}
