/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpinho-d <fpinho-d@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 16:11:16 by fpinho-d          #+#    #+#             */
/*   Updated: 2023/01/12 19:01:54 by fpinho-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include <string.h>


int	ft_putstr(char *str)
{
	int	i ;
	i = 0;

	while(str[i])

	{
		write(1, &str[i], 1);
		i++;
	}
	return (i);
}


int ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_printf_arg(const char *conteudo, int i, va_list ap)
{
	int count;

	count = 0;
	if (conteudo[i + 1] == 'c')
		count += (ft_putchar(va_arg(ap, int)));
	else if(conteudo[i + 1] == 's')
		count += (puts(va_arg(ap, char *)));
	return (count);
}

int	ft_printf(const char *conteudo, ...)
{
	va_list ap;
	int	i;
	int	ret;

	i = 0;
	ret = 0;

	va_start(ap, conteudo);
	while(conteudo[i])
	{
		if ((conteudo[i] == '%') && strchr("csdiuxX", conteudo[i + 1]))
		{
			ret += ft_printf_arg(conteudo, i, ap);
			i+=2;
		}
		else
		{
			ret += ft_putchar(conteudo[i]);
			i++;
		}
	}
	va_end(ap);
	return(ret);
}

int	main()
{
	char	a = 'p';
	int	b = 100;
	char c[] = "Tiago";

//	printf("Valores sao %c %d", a, b);
printf("%d", ft_printf("Valores %c %s" , a, c));
	
}
