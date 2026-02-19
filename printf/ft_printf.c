/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanadil <acanadil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 10:38:17 by acanadil          #+#    #+#             */
/*   Updated: 2026/02/04 10:34:07 by acanadil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	operate(char *ope, va_list arg)
{
	int	i;

	i = 0;
	if (*ope == 'c')
		i += ft_putchar((char) va_arg(arg, int));
	else if (*ope == 's')
		i += ft_putstr(va_arg(arg, char *));
	else if (*ope == '%')
		i += ft_putchar('%');
	else if (*ope == 'd' || *ope == 'i')
		i += ft_putnbr(va_arg(arg, int));
	else if (*ope == 'u')
		i += ft_putnbr(va_arg(arg, unsigned int));
	else if (*ope == 'x')
		i += ft_putstrm(ft_tolowercase(ft_itoah(va_arg(arg, unsigned int))));
	else if (*ope == 'X')
		i += ft_putstrm(ft_touppercase(ft_itoah(va_arg(arg, unsigned int))));
	else if (*ope == 'p')
		i += ft_putdir(va_arg(arg, unsigned long));
	return (i);
}

int	ft_printf(const char *str, ...)
{
	va_list	arg;
	int		i;
	char	*s;

	if (!str)
		return (-1);
	s = (char *) str;
	i = 0;
	va_start(arg, str);
	while (*s)
	{
		if (*s == '%')
			i += operate(++s, arg);
		else
		{
			write(1, s, 1);
			i++;
		}
		s++;
	}
	va_end(arg);
	return (i);
}
