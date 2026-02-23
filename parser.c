/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanadil <acanadil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/23 12:46:43 by acanadil          #+#    #+#             */
/*   Updated: 2026/02/23 15:56:26 by acanadil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static t_list	*addflag(int fl, int p)
{
	t_list	*flag;

	flag = ft_lstnew(fl);
	if (flag)
		flag -> pos = p;
	return (flag);
}

static int	no_repit(t_list *flags)
{
	t_list	*bench;
	t_list	*flag;
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

static void	found_flags(char **args, t_list **flags)
{
	char	*d[5];
	int		p;
	int		fl;
	char	*arg;

	p = 0;
	fl = 0;
	d[0] = "--simple";
	d[1] = "--medium";
	d[2] = "--complex";
	d[3] = "--adaptive";
	d[4] = "--bench";
	while (*args)
	{
		arg = *args;
		fl = 0;
		while (!strverif(*args, d[fl]))
			fl++;
		if (strverif(*args, d[fl]))
			ft_lstadd_back(flags, addflag(fl, p));
		p++;
	}
}

int	*parser(char **arg, t_list **flags)
{
	found_flags(arg, flags);
	if (ft_lstsize(*flags) > 2)
		return (NULL);
	if (!no_repit(*flags))
		return (NULL);
	
}
