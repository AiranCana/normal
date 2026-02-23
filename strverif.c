/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strverif.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanadil <acanadil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 16:21:43 by acanadil          #+#    #+#             */
/*   Updated: 2026/02/23 11:03:39 by acanadil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	strverif(char *str1, char *str2)
{
	while (*str1 && *str2)
	{
		if (*str1 != *str2)
			return (0);
		str1++;
		str2++;
	}
	if (*str1 != *str2)
		return (0);
	return (1);
}

/*
char *mov = "sa\0";
if(strverif(mov, ""))
	sa(stack);
*/