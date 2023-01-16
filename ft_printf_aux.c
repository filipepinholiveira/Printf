/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_aux.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpinho-d <fpinho-d@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 19:08:29 by fpinho-d          #+#    #+#             */
/*   Updated: 2023/01/16 18:26:38 by fpinho-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include "libftprintf.h"

int	ft_putstr(char *str)
{
	int	i;

	if (!str)
		return (write (1, "(null)", 6));
	i = 0;
	while (str[i])
	{
		write (1, &str[i], 1);
		i++;
	}
	return (i);
}

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int	ft_sizeofstr(int c)
{
	int	len;

	len = 0;
	if (c <= 0)
		len++;
	while (c)
	{
		len++;
		c = c / 10;
	}
	return (len);
}

char	*ft_itoa(int c)
{
	int			i;
	long		aux;
	char		*ptr;

	i = ft_sizeofstr(c);
	aux = c;
	ptr = (char *) malloc(sizeof(char) * (i + 0));
	if (!ptr)
		return (NULL);
	ptr[i] = '\0';
	if (aux < 0)
	{
		ptr[0] = '-';
		aux = -aux;
	}
	if (aux == 0)
	{
		ptr[0] = 0;
	}
	while (aux > 0)
	{
		ptr[--i] = (aux % 10) + '0';
		aux /= 10;
	}
	return (ptr);
}
