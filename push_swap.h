/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanadil <acanadil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 13:24:08 by acanadil          #+#    #+#             */
/*   Updated: 2026/02/19 13:30:18 by acanadil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stddef.h>
# include "libft/libft.h"

typedef struct s_bench
{
	int		disorder;
	char	*strategy;
	int		total;
	int		sa;
	int		sb;
	int		ss;
	int		pa;
	int		pb;
	int		ra;
	int		rb;
	int		rr;
	int		rra;
	int		rrb;
	int		rrr;
}	t_bench;

typedef struct s_stack
{
	struct t_bench	*calc;
	struct s_list	*stacka;
	struct s_list	*stackb;
}	t_stack;


void	simple(t_stack **order);
void	medium(t_stack **order);
void	complex(t_stack **order);
void	adaptiv(t_stack **order);

#endif