/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_aux3.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpinho-d <fpinho-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 12:01:35 by fpinho-d          #+#    #+#             */
/*   Updated: 2023/01/19 19:39:05 by fpinho-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_count_hex(unsigned int(c))
{
	int	i;

	i = 0;
	if (c == 0)
		return (1);
	while (c > 0)
	{
		c = c / 16;
		i++;
	}
	return (i);
}

char	*ft_str_to_hexa(unsigned int a, const char * base)
{
	int	size;
	char *ptr;

	size = ft_count_hex(a);
	ptr = malloc((size + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	ptr[size--] = '\0';
	while(a > 0)
	{
		ptr[size] = base[a % 16];
		a = a / 16;		
		size--;
	}
	return (ptr);
}


int	ft_putnbr_hexa(unsigned int nbr, char * base)
{
	int	ret;
	char *str;
	
	str = ft_str_to_hexa(nbr, base);
	ret = ft_putstr(str);

	return(ret);
}
