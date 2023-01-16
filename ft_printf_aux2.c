/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_aux2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpinho-d <fpinho-d@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 16:00:37 by fpinho-d          #+#    #+#             */
/*   Updated: 2023/01/16 17:53:36 by fpinho-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

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
