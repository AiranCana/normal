/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanadil <acanadil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/27 15:15:22 by acanadil          #+#    #+#             */
/*   Updated: 2026/02/27 16:05:36 by acanadil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "gnl/get_next_line.h"

t_stack	*asign(t_list *a)
{
	
}

int	error(void)
{
	write(2, "Error\n", 6);
	return (0);
}

int	main(int argv, char **args)
{
	t_list	*stacka;
	t_stack	*stack;
	t_flags	*flags;
	char	*s;

	flags = NULL;
	if (argv < 1)
		return (0);
	args++;
	stacka = parser(args, &flags, error);
	if (!stacka)
		return (0);
	stack = asign(stacka);
	s = get_next_line(0);
	while (s)
	{
		makemove(&stack, s);
		s = get_next_line(0);
	}
	print_sol(stack -> stacka);
	freeall(flags, stack);
	return (0);
}
