/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_aux2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpinho-d <fpinho-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 16:00:37 by fpinho-d          #+#    #+#             */
/*   Updated: 2023/01/19 19:38:56 by fpinho-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int a)
{
	int		c;
	char	*b;

	b = ft_itoa(a);
	c = ft_strlen(b);
	ft_putstr(b);
	free(b);
	return (c);
}

int	ft_putnbr_unsigned(unsigned int x)
{
	int	a;
	int	b;
	char	*c;

	a = x;
	c = ft_itoa(a);
	b = ft_strlen(c);
	ft_putstr(c);
	free(c);
	return(b);
}
