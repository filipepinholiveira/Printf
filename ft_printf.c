/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpinho-d <fpinho-d@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 16:11:16 by fpinho-d          #+#    #+#             */
/*   Updated: 2023/01/18 17:33:17 by fpinho-d         ###   ########.fr       */
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
	else if (conteudo[i + 1] == '%')
			count += (ft_putchar(conteudo[i + 1]));
	else if (conteudo[i + 1] == 'u')
			count += (ft_putnbr_unsigned(va_arg(ap, unsigned int))); 
	else if (conteudo[i + 1] == 'x')
			count += (ft_putnbr_hexa(va_arg(ap, unsigned int), "0123456789abcdef")); 
	else if (conteudo[i + 1] == 'X')
			count += (ft_putnbr_hexa(va_arg(ap, unsigned int), "0123456789ABCDEF")); 
	else if (conteudo[i + 1] == 'p')
			count += (ft_putstr("0x") + ft_put_pointer(va_arg(ap, void *), "0123456789abcdef"));
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
	void	*d = &b;	
	char str [] = "(null)";
	unsigned int e = 42;
	unsigned int f = 255;


	ft_printf("Valores:\n\n");

	ft_printf("%c\n", a);
	ft_printf("%d\n", b);
	ft_printf("%s\n", c);
	ft_printf("%i\n", d);
	int i = ft_printf("string nula: %s\n", str);
	int j = printf("string nula: %s\n", str);
//	int k = printf("tamanho e' %d", printf("%s", str));
	printf("\n%d - %d\n", i, j);
	ft_printf("%%\n");
	ft_printf("%u\n", e);
	printf("%x\n", f);
	ft_printf("%x\n", f);;
	printf("%X\n", f);
	ft_printf("%X\n", f);;
	printf("%p\n", d);
	ft_printf("%p\n", d);
}

