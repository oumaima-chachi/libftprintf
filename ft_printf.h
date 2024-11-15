/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochachi <ochachi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 14:54:50 by ochachi           #+#    #+#             */
/*   Updated: 2024/11/14 15:20:20 by ochachi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <inttypes.h>
# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
int		ft_putchar(char c);
int		ft_putnbr(int n);
int		ft_putstr(char *s);
int		ft_phex(uintptr_t num, char form);
int		ft_putp(void *p);
int		ft_print_pr(void);
int		ft_printf(const char *format, ...);
int		ft_putunbr(unsigned int n);
size_t	ft_strlen(const char *str);
#endif