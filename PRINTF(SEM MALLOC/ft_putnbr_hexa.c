/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hexa.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpinho-d <fpinho-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 18:29:28 by fpinho-d          #+#    #+#             */
/*   Updated: 2023/01/25 19:08:11 by fpinho-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_count_hexa(unsigned int a)
{
	int	len;

	len = 0;
	if (a == 0)
		return (1);
	while (a)
	{
		a = a / 16;
		len++;
	}
	return (len);
}

int	ft_putnbr_hexa(unsigned int x, char *base)
{
	int	len;

	len = ft_count_u(x);
	if (x > 15)
	{
		ft_putnbr_u(x / 16);
		ft_putnbr_u(x % 16);
	}
	else
		ft_putchar(base[x % 16]);
	return (len);
}
