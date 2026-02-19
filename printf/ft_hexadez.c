/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexadez.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanadil <acanadil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 17:06:07 by acanadil          #+#    #+#             */
/*   Updated: 2026/02/04 12:23:39 by acanadil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	numlen(unsigned long n)
{
	int	d;

	d = 1;
	while (n > 15)
	{
		n /= 16;
		++d;
	}
	++d;
	return (d);
}

static void	numins(unsigned long temp, char *dst)
{
	char	c;

	if (temp >= 16)
		numins((temp / 16), dst - 1);
	temp %= 16;
	if (temp >= 10)
		c = temp + 55;
	else
		c = 48 + temp;
	dst[0] = c;
}

char	*ft_itoah(unsigned long n)
{
	char			*dst;
	unsigned long	num;
	int				len;

	num = n;
	len = numlen(num);
	dst = malloc(sizeof (char) * len);
	if (!dst)
		return (NULL);
	dst[len - 1] = '\0';
	numins(num, &dst[len - 2]);
	return (dst);
}
