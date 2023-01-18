/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpinho-d <fpinho-d@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 18:05:28 by fpinho-d          #+#    #+#             */
/*   Updated: 2023/01/18 11:01:10 by fpinho-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

int		ft_putchar(char c);
int		ft_putstr(char *str);
int		ft_strlen(char *str);
char	*ft_itoa(int c);
int		ft_putnbr(int a);
int		ft_sizeofstr(int c);
int		ft_printf_arg(const char *conteudo, int i, va_list ap);
int		ft_printf(const char *conteudo, ...);
int		ft_putnbr_unsigned(unsigned int x);

#endif
