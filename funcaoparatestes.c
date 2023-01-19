/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcaoparatestes.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpinho-d <fpinho-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 16:53:20 by fpinho-d          #+#    #+#             */
/*   Updated: 2023/01/19 19:39:32 by fpinho-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <unistd.h>
#include "ft_printf.h"
#include <stdlib.h>


int		number_len(int n);

char	*ft_itoa(int n)
{
	int		i;
	long	aux;
	char	*ptr;

	i = number_len(n);
	aux = n;
	ptr = (char *)malloc(sizeof(char) * (i + 1));
	if (!ptr)
		return (NULL);
	ptr[i] = '\0';
	if (aux < 0)
	{
		ptr[0] = '-';
		aux *= -1;
	}
	if (aux == 0)
		ptr[0] = '0';
	ptr[i--] = '\0';
	while (aux)
	{
		ptr[i--] = (aux % 10) + '0';
		aux /= 10;
	}
	return (ptr);
}

int	number_len(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len++;
	while (n)
	{
		len++;
		n /= 10;
	}
	return (len);
}

int main()
{
	int	a = 0;
	printf("%s", ft_itoa(a));
}
