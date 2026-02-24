/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanadil <acanadil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/23 12:46:43 by acanadil          #+#    #+#             */
/*   Updated: 2026/02/24 11:57:51 by acanadil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static t_flags	*addflag(int fl, int p, char *fla)
{
	t_flags	*flag;

	flag = ft_flanew(fl, fla);
	if (flag)
		flag -> pos = p;
	return (flag);
}

static int	no_repit(t_flags *flags)
{
	t_flags	*bench;
	t_flags	*flag;
	int		count;

	count = 0;
	flag = flags;
	bench = flags;
	while (flag)
	{
		if (flag -> num < 4)
			count ++;
		flag = flag -> next;
	}
	if (count > 1)
		return (0);
	count = 0;
	while (bench)
	{
		if (bench -> num == 4)
			count ++;
		bench = bench -> next;
	}
	if (count > 1)
		return (0);
	return (1);
}

void	found_flags(char **args, t_flags **flags)
{
	char	*d[5];
	int		p;
	int		fl;

	p = 0;
	fl = 0;
	d[0] = "--simple";
	d[1] = "--medium";
	d[2] = "--complex";
	d[3] = "--adaptive";
	d[4] = "--bench";
	while (*args)
	{
		fl = 0;
		while (fl < 5)
		{
			if (strverif(*args, d[fl]))
				ft_flaadd_back(flags, addflag(fl, p,
						ft_strnstr(*args, d[fl], ft_strlen(*args))));
			fl++;
		}
		p++;
		args++;
	}
}

int	**parser(char **arg, t_flags **flags)
{
	found_flags(arg, flags);
	if (ft_flasize(*flags) > 2)
		return (NULL);
	if (!no_repit(*flags))
		return (NULL);
	//return (parser_int(arg, flags));
	return (NULL);
}
