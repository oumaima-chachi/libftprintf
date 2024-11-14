/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochachi <ochachi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 14:52:22 by ochachi           #+#    #+#             */
/*   Updated: 2024/11/14 16:15:52 by ochachi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int n)
{
	char	c;

	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
	}
	if (n >= 10)
	{
		ft_putnbr(n / 10);
	}
	c = (n % 10) + '0';
	write(1, &c, 1);
}

void	ft_putstr(char *s)
{
	if (s == NULL)
	{
		return ;
	}
	while (*s)
	{
		write(1, s, 1);
		s++;
	}
}
void	ft_putunbr(unsigned int n)
{
	char c;

	if (n >= 10)
	{
		ft_putunbr(n / 10);
	}
	c = (n % 10) + '0';
	write(1, &c, 1);  
}
