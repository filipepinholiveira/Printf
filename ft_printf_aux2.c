/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_aux2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpinho-d <fpinho-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 16:00:37 by fpinho-d          #+#    #+#             */
/*   Updated: 2023/01/20 20:18:40 by fpinho-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_itoa_unsigned(unsigned int c)
{
	int			i;
	long		aux;
	char		*ptr;
	
	i = ft_sizeofstr(c);
	aux = c;
	ptr = (char *) malloc(sizeof(char) * (i + 1));
	if (!ptr)
		return (NULL);
	ptr[i] = '\0';
	if (aux == 0)
	{
		ptr[0] = '0';
	}
	while (aux > 0)
	{
		ptr[--i] = (aux % 10) + '0';
		aux /= 10;
	}
	return (ptr);
}

int	ft_putnbr(int a)
{
	int		c;
	char	*b;

	b = ft_itoa(a);
	c = ft_putstr(b);
	free(b);
	return (c);
}

size_t	ft_putnbr_unsigned(unsigned int x)
{
	size_t			b;
	char		*c;

	c = ft_itoa_unsigned(x);
	b = ft_putstr(c);
	free(c);
	return (b);
}

