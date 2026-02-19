/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanadil <acanadil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 11:02:35 by acanadil          #+#    #+#             */
/*   Updated: 2026/02/04 10:28:24 by acanadil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_putnbr_fd(long n, int fd, int *count)
{
	char	num;

	if (n == -2147483648)
	{
		*count = write(fd, "-2147483648", 11);
		return (*count);
	}
	if (n < 0)
	{
		n = -n;
		*count += write(fd, "-", 1);
	}
	if (n >= 10)
		ft_putnbr_fd(n / 10, fd, count);
	num = 48 + (n % 10);
	*count += write(fd, &num, 1);
	return (*count);
}
