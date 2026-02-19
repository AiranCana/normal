/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanadil <acanadil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 13:41:50 by acanadil          #+#    #+#             */
/*   Updated: 2026/02/04 10:09:19 by acanadil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stddef.h>
# include <stdarg.h>
# include <stdint.h>

char	*ft_itoah(unsigned long n);
char	*ft_tolowercase(char *s);
char	*ft_touppercase(char *s);

int		ft_printf( const char *str, ...);
int		ft_putchar(char c);
int		ft_putnbr(long i);
int		ft_putstr(char *s);	
int		ft_putstrm(char *s);	
int		ft_putdir(unsigned long p);
size_t	ft_strlen(const char *line);
void	ft_putstr_fd(char *s, int fd);
void	ft_putchar_fd(char c, int fd);
int		ft_putnbr_fd(long n, int fd, int *count);
int		ft_toupper(int c);
int		ft_tolower(int c);
int		ft_isalpha(int c);

#endif