/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putthing.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanadil <acanadil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 13:18:49 by acanadil          #+#    #+#             */
/*   Updated: 2026/02/02 15:57:07 by acanadil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	ft_putchar_fd(c, 1);
	return (1);
}

int	ft_putnbr(long i)
{
	int	j;
	int	s;

	s = 0;
	j = ft_putnbr_fd(i, 1, &s);
	return (j);
}

int	ft_putstr(char *s)
{
	if (!s)
		return (ft_putstr("(null)"));
	ft_putstr_fd(s, 1);
	return (ft_strlen(s));
}

int	ft_putstrm(char *s)
{
	int	i;

	i = 0;
	if (!s)
		return (ft_putstr("(null)"));
	ft_putstr_fd(s, 1);
	i = ft_strlen(s);
	free(s);
	return (i);
}

int	ft_putdir(unsigned long p)
{
	int		i;
	char	*s;

	i = 0;
	if (!p)
		return (ft_putstr("(nil)"));
	s = ft_itoah(p);
	i += ft_putstr("0x");
	i += ft_putstr(ft_tolowercase(s));
	free(s);
	return (i);
}
