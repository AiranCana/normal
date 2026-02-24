/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_int.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanadil <acanadil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 09:59:52 by acanadil          #+#    #+#             */
/*   Updated: 2026/02/24 14:49:26 by acanadil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "structur.h"

static size_t	num_number(char **arg, t_flags **flags)
{
	size_t	i;

	i = 0;
	while (*arg)
	{
		while (**arg)
		{
			if (**arg == ' ')
			{
				while (**arg && **arg != )
			}
		}
		arg++;
	}
	return (i);
}

int	**parser_int(char **arg, t_flags **flags)
{
	size_t	size;
	int		**numbers;

	size = num_number(arg, flags);
	if (size == 0)
		return (NULL);
	numbers = malloc(sizeof (int *) * size);
	return (numbers);
}
