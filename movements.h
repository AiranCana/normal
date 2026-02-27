/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movements.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanadil <acanadil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 13:20:40 by acanadil          #+#    #+#             */
/*   Updated: 2026/02/27 12:12:57 by acanadil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MOVEMENTS_H
# define MOVEMENTS_H

# include "push_swap.h"

void	rra(t_stack **stack);
void	rrb(t_stack **stack);
void	rrr(t_stack **stack);
void	sa(t_stack **stack);
void	sb(t_stack **stack);
void	ss(t_stack **stack);
void	pa(t_stack **stack);
void	pb(t_stack **stack);
void	ra(t_stack **stack);
void	rb(t_stack **stack);
void	rr(t_stack **stack);

void	rra_bonus(t_stack **stack);
void	rrb_bonus(t_stack **stack);
void	rrr_bonus(t_stack **stack);
void	sa_bonus(t_stack **stack);
void	sb_bonus(t_stack **stack);
void	ss_bonus(t_stack **stack);
void	pa_bonus(t_stack **stack);
void	pb_bonus(t_stack **stack);
void	ra_bonus(t_stack **stack);
void	rb_bonus(t_stack **stack);
void	rr_bonus(t_stack **stack);

int		push(t_list **stack, t_list **dest);
int		revrotateall(t_stack **stack);
int		rotateall(t_stack **stack);
int		revrotate(t_list **stack);
int		swapall(t_stack **stack);
int		rotate(t_list **stack);
int		swap(t_list **stack);

#endif