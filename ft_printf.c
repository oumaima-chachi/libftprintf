/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochachi <ochachi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 14:48:27 by ochachi           #+#    #+#             */
/*   Updated: 2024/11/17 01:13:31 by ochachi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	h_specificateurs(char spec, va_list args)
{
	if (spec == 'c')
		return (ft_putchar(va_arg(args, int)));
	if (spec == 's')
		return (ft_putstr(va_arg(args, char *)));
	if (spec == 'p')
		return (ft_putp(va_arg(args, void *)));
	if (spec == 'd' || spec == 'i')
		return (ft_putnbr(va_arg(args, int)));
	if (spec == 'u')
		return (ft_putunbr(va_arg(args, unsigned int)));
	if (spec == 'x')
		return (ft_phex(va_arg(args, unsigned int), 'x'));
	if (spec == 'X')
		return (ft_phex(va_arg(args, unsigned int), 'X'));
	if (spec == '%')
		return (ft_print_pr());
	return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		calc;
	int		i;

	calc = 0;
	i = 0;
	va_start(args, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%' && format[i + 1] != '\0')
		{
			i++;
			calc += h_specificateurs(format[i], args);
		}
		else
			calc += write(1, &format[i], 1);
		i++;
	}
	va_end(args);
	return (calc);
}
