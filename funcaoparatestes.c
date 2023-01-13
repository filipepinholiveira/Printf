/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcaoparatestes.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpinho-d <fpinho-d@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 16:53:20 by fpinho-d          #+#    #+#             */
/*   Updated: 2023/01/13 12:26:59 by fpinho-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <unistd.h>
#include "libftprintf.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while(str[i])
	{
		i++;
	}
	return(i);
}


int	ft_putnbr(int nb)
{
	int	count;

	count = 0;
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb > 10)
	{
		ft_putnbr(nb / 10);
		nb = nb % 10;
	}
	if (nb <= 10)
	{
		ft_putchar(nb + 48);
	}
	//printf("%d\n", count);
	return (count);
}

int main()
{
	int	a = 2000;
	ft_putnbr(a);
}
