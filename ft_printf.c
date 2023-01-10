/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpinho-d <fpinho-d@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 16:41:32 by fpinho-d          #+#    #+#             */
/*   Updated: 2023/01/10 18:59:40 by fpinho-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
#include <stdarg.h>
#include "libft/libft.h"

int	ft_printf_arg(const char *ctd, int i, va_list ap);

int	ft_printf(const char *conteudo, ...)
{
	va_list	ap;
	int	i;
	int	print;

	i = 0;
	print = 0;
	va_start(ap, conteudo);

	while (conteudo[i])
	{
		if (conteudo[i] == '%' && ft_strchr("c", conteudo[i + 1]))
		{
			print += ft_printf_arg(conteudo, i, ap);
			i++;
		}
		else
			print += ft_putchar(conteudo[i]);
		i++;
	}
	va_end(ap);
	return(print);
}

int	ft_printf_arg(const char *ctd, int i, va_list ap)
{
	if (ctd[i + 1] == 'c')
		return (ft_putchar(var_arg(ap, int)));
	else
		return (0);
}
