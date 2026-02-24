/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanadil <acanadil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 13:24:08 by acanadil          #+#    #+#             */
/*   Updated: 2026/02/24 10:55:18 by acanadil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stddef.h>
# include "libft/libft.h"
# include "ft_flags/ft_flags.h"

void	simple(t_stack **order);
void	medium(t_stack **order);
void	complex(t_stack **order);
void	adaptiv(t_stack **order);
int		strverif(char *str1, char *str2);
int		**parser(char **arg, t_flags **flags);
int		**parser_int(char **arg, t_flags **flags);

#endif