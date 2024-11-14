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
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
void	ft_putchar(char c);
void	ft_putnbr(int n);
void	ft_putstr(char *s);
void	ft_phex(uintptr_t num, char form);
void	ft_putp(void *p);
void	ft_print_pr(void);

#endif