/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochachi <ochachi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 14:48:27 by ochachi           #+#    #+#             */
/*   Updated: 2024/11/15 09:02:16 by ochachi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list args;
	int calc;
	int i;

	calc = 0;
	i = 0;
	va_start(args, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%' && format[i + 1] != '\0')
		{
			i++;
			if (format[i] == 'c')
			{
				calc += ft_putchar(va_arg(args, int));
			}
			else if (format[i] == 's')
			{
				calc += ft_putstr(va_arg(args, char *));
			}
			else if (format[i] == 'p')
			{
				calc += ft_putp(va_arg(args, void *));
			}
			else if (format[i] == 'd' || format[i] == 'i')
			{
				calc += ft_putnbr(va_arg(args, int));
			}
			else if (format[i] == 'u')
			{
				calc += ft_putunbr(va_arg(args, unsigned int));
			}
			else if (format[i] == 'x')
			{
				calc += ft_phex(va_arg(args, unsigned int), 'x');
			}
			else if (format[i] == 'X')
			{
				calc += ft_phex(va_arg(args, unsigned int), 'X');
			}
			else if (format[i] == '%')
			{
				ft_print_pr();
				calc++;
			}
		}
		i++;
	}
	va_end(args);
	return (calc);
}