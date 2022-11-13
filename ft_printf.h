/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikorkut <ikorkut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 17:50:46 by ikorkut           #+#    #+#             */
/*   Updated: 2022/11/12 19:01:35 by ikorkut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>

# ifndef LOWER_BASE
#  define LOWER_BASE "0123456789abcdef"
# endif

# ifndef UPPER_BASE
#  define UPPER_BASE "0123456789ABCDEF"
# endif

int	ft_putchar(int c);
int	ft_str(char *str);
int	ft_putnbr(long double number, int base, int is_upper);
int	ft_pointer(long double number, int base, int is_upper);
int	ft_control(char c, va_list list);
int	ft_printf(const char *str, ...);

#endif