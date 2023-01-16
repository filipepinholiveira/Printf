/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpinho-d <fpinho-d@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 16:11:16 by fpinho-d          #+#    #+#             */
/*   Updated: 2023/01/16 18:39:16 by fpinho-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include <string.h>
#include "libftprintf.h"

int	ft_printf_arg(const char *conteudo, int i, va_list ap)
{
	int	count;

	count = 0;
	if (conteudo[i + 1] == 'c')
		count += (ft_putchar(va_arg(ap, int)));
	else if (conteudo[i + 1] == 's')
		count += (ft_putstr(va_arg(ap, char *)));
	else if ((conteudo[i + 1] == 'd') || (conteudo[i + 1] == 'i'))
		count += (ft_putnbr(va_arg(ap, int)));
	printf(" tamanho e': %d\n", count);
	return (count);
}

int	ft_printf(const char *conteudo, ...)
{
	va_list	ap;
	int		i;
	int		ret;

	i = 0;
	ret = 0;
	va_start(ap, conteudo);
	while (conteudo[i])
	{
		if ((conteudo[i] == '%') && strchr("csdiuxXp%", conteudo[i + 1]))
		{
			ret += ft_printf_arg(conteudo, i, ap);
			i += 2;
		}
		else
		{
			ret += ft_putchar(conteudo[i]);
			i++;
		}
	}
	va_end (ap);
	return (ret);
}

int	main()
{
	char a = 'p';
	int	b = 1090;
	char c[] = "Tiago";
	int	d = 2000;	
	char str [] = "(null)";


	ft_printf("Valores:\n\n");

	ft_printf("%c\n", a);
	ft_printf("%d\n", b);
	ft_printf("%s\n", c);
	ft_printf("%i\n", d);
	int i = ft_printf("string nula: %s\n", str);
	int j = printf("string nula: %s\n", str);
	int k = printf("tamanho e' %d", printf("%s", str));
	printf("\n%d - %d", i, j);
}

