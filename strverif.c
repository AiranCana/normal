/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strverif.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanadil <acanadil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 16:21:43 by acanadil          #+#    #+#             */
/*   Updated: 2026/02/27 15:58:43 by acanadil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	strverif(char *str1, char *str2)
{
	char	*s;
	int		i;

	i = 0;
	s = ft_strnstr(str1, str2, ft_strlen(str1));
	if (!s)
		return (0);
	if (!s[ft_strlen(str2)] || s[ft_strlen(str2)] == ' ')
	{
		if (s == str1)
			return (1);
		while ((str1 + i) != s)
			i++;
		i--;
		if (str1[i] == ' ')
			return (1);
	}
	return (0);
}

int	strverifall(char *str1, char *str2)
{
	while (str1 && str2)
	{
		if (*str1 != *str2)
			return (1);
		str1++;
		str2++;
	}
	if (*str1 != *str2)
		return (1);
	return (0);
}
