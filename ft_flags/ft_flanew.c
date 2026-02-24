/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flanew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanadil <acanadil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 11:05:25 by acanadil          #+#    #+#             */
/*   Updated: 2026/02/24 11:07:27 by acanadil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_flags.h"

t_flags	*ft_flanew(int content, char *fla)
{
	t_flags	*new;

	new = malloc(sizeof (t_list));
	if (!new)
		return (NULL);
	new -> num = content;
	new -> next = NULL;
	new -> flag = fla;
	return (new);
}
