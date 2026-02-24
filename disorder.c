/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   disorder.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqroca- <raqroca-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 15:17:39 by raqroca-          #+#    #+#             */
/*   Updated: 2026/02/24 15:47:08 by raqroca-         ###   ########.fr       */
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
 */
float	compute_disorder(t_list *stack_a)
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
