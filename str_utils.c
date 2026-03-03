/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_utils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanadil <acanadil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 16:21:43 by acanadil          #+#    #+#             */
/*   Updated: 2026/03/03 13:38:49 by acanadil         ###   ########.fr       */
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

long	ft_atoi_long(const char *nptr)
{
	long	num;
	int		sign;

	sign = 1;
	num = 0;
	while (*nptr == 32 || (*nptr >= 9 && *nptr <= 13))
		++nptr;
	if (0 == ft_isdigit(*nptr))
	{
		if (*nptr == '+' || *nptr == '-')
		{
			if (*nptr == '-')
				sign *= -1;
		}
		else
			return (0);
		++nptr;
	}
	while (*nptr && 0 != ft_isdigit(*nptr))
	{
		num *= 10;
		num += (*(nptr++) - 48);
	}
	return (num * sign);
}

void	makemove(t_stack **order, char *move)
{
	if (strverifall(move, "sa\n"))
		sa_bonus(order);
	else if (strverifall(move, "pa\n"))
		pa_bonus(order);
	else if (strverifall(move, "sb\n"))
		sb_bonus(order);
	else if (strverifall(move, "ss\n"))
		ss_bonus(order);
	else if (strverifall(move, "pb\n"))
		pb_bonus(order);
	else if (strverifall(move, "ra\n"))
		ra_bonus(order);
	else if (strverifall(move, "rb\n"))
		rb_bonus(order);
	else if (strverifall(move, "rr\n"))
		rr_bonus(order);
	else if (strverifall(move, "rra\n"))
		rra_bonus(order);
	else if (strverifall(move, "rrb\n"))
		rrb_bonus(order);
	else if (strverifall(move, "rrr\n"))
		rrr_bonus(order);
}
