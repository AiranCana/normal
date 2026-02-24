/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqroca- <raqroca-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 13:24:08 by acanadil          #+#    #+#             */
/*   Updated: 2026/02/24 12:56:21 by raqroca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stddef.h>
# include "libft/libft.h"
# include "ft_flags/ft_flags.h"
# include "movements/movements.h"

void	simple(t_stack **order);
void	medium(t_stack **order);
void	complex(t_stack **order);
void	adaptiv(t_stack **order);
int		strverif(char *str1, char *str2);
int		**parser(char **arg, t_flags **flags);
int		**parser_int(char **arg, t_flags **flags);

int		get_min(t_list *stack);
int		get_max(t_list *stack);
int		is_sorted(t_list *stack);
int		get_position(t_list *stack, int value);
void	free_stack(t_stack **stack);

#endif