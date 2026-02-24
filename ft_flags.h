/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flags.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanadil <acanadil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 10:52:16 by acanadil          #+#    #+#             */
/*   Updated: 2026/02/24 15:05:34 by acanadil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_FLAGS_H
# define FT_FLAGS_H

# include "structur.h"

int		ft_flasize(t_flags *lst);
void	ft_flaadd_back(t_flags **lst, t_flags *new);
t_flags	*ft_flanew(int content, char *fla);
void	ft_flaclear(t_flags **lst);

#endif