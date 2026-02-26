/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   structur.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanadil <acanadil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/23 12:50:27 by acanadil          #+#    #+#             */
/*   Updated: 2026/02/25 11:06:19 by acanadil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCTUR_H
# define STRUCTUR_H

# include "libft/libft.h"

typedef struct s_bench
{
	float	disorder;
	char	*strategy;
	char	*flag;
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
	struct s_bench	*calc;
	struct s_list	*stacka;
	struct s_list	*stackb;
}	t_stack;

typedef struct s_flags
{
	int				num;
	int				pos;
	char			*flag;
	struct s_flags	*next;
}	t_flags;

#endif