/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuy-ngu <thuy-ngu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 15:20:15 by thuy-ngu          #+#    #+#             */
/*   Updated: 2023/10/28 15:47:07 by thuy-ngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <stdarg.h>

int	ft_printcheck(char s, va_list ap);
int	ft_printf(const char *format, ...);
int	ft_putchar(int c);
int	ft_putstr(char *str);
int	ft_putptr(unsigned long ptr);
int	ft_putnbr(long n, int base, char type);
int	ft_putcharptr(unsigned long signvalue);

#endif