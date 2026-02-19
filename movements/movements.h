/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movements.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanadil <acanadil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 13:20:40 by acanadil          #+#    #+#             */
/*   Updated: 2026/02/19 13:22:26 by acanadil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef MOVEMENTS_H
# define MOVEMENTS_H

# include "../libft/libft.h"

void	swapall(t_stack **stack);
void	rotate(t_list **stack);
void	revrotate(t_list **stack);
void	swap(t_list **swap);


#endif