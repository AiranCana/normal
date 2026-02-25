/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   disorder.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqroca- <raqroca-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 15:17:39 by raqroca-          #+#    #+#             */
/*   Updated: 2026/02/25 11:54:57 by raqroca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
/**
 * Calculates the disorder index (0.0 to 1.0)
 * 0.0 = Ordered | 1.0 = Maximum disorder (inverted)
 
 * function compute_disorder(stack a):
 *	mistakes = 0
 *	total_pairs = 0
 *	for i from 0 to size(a)-1:
 *		for j from i+1 to size(a)-1:
 *			total_pairs += 1
 *			if a[i] > a[j]:
 *				mistakes += 1
 *	return mistakes / total_pairs

 *	- Measures how far stack A is from being sorted (scale 0 to 1).
 *	- 0.0 means fully sorted, 1.0 means fully reversed.
 *	- It iterates through every possible pair (i, j) where i comes before j:
 *		- Total_pairs: Total number of comparisons made.
 *		- Mistakes: Number of times a larger number appears before a smaller one.
 *	- Formula: mistakes / total_pairs.
 *	- This value determines the strategy used in the adaptive mode.

 *	function print_disorder:
 *	0.4323 -> 4323
 *	if else parte entera  (43)
 *	print .
 *	2 decimals always     (23)
 */
float	disorder(t_list *stack_a)
{
	t_list	*current;
	t_list	*compare;
	float	mistakes;
	float	total_pairs;

	if (!stack_a || !stack_a->next)
		return (0.0);
	mistakes = 0;
	total_pairs = 0;
	current = stack_a;
	while (current)
	{
		compare = current->next;
		while (compare)
		{
			total_pairs++;
			if (current->num > compare->num)
				mistakes++;
			compare = compare->next;
		}
		current = current->next;
	}
	return (mistakes / total_pairs);
}

static void	integer_part(int integer)
{
	char	c1;
	char	c2;

	if (integer == 100)
		write(2, "100", 3);
	else if (integer >= 10)
	{
		c1 = (integer / 10) + '0';
		c2 = (integer % 10) + '0';
		write(2, &c1, 1);
		write(2, &c2, 1);
	}
	else
	{
		c1 = integer + '0';
		write(2, &c1, 1);
	}
}

void	print_disorder(float d)
{
	int		n;
	int		integer;
	int		decimal;
	char	d1;
	char	d2;

	n = (int)(d * 10000 + 0.5);
	integer = n / 100;
	decimal = n % 100;
	integer_part(integer);
	write(2, ".", 1);
	d1 = (decimal / 10) + '0';
	d2 = (decimal % 10) + '0';
	write(2, &d1, 1);
	write(2, &d2, 1);
	write(2, "%\n", 2);
}
