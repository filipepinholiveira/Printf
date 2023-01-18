/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_aux4.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpinho-d <fpinho-d@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 16:40:53 by fpinho-d          #+#    #+#             */
/*   Updated: 2023/01/18 17:32:02 by fpinho-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"



int	ft_count_hexa(unsigned long int nbr)
{
	int i;

	i = 0;
	if (nbr == 0)
		return (1);
	while (nbr > 0)
	{
		i++;
		nbr = nbr / 16;
	}
	return (i);
}

char	*ft_put_hexa_to_str(unsigned long nbr, char* base)
{
	int size;
	char * ptr;

	size = ft_count_hexa(nbr);
	ptr = ((char *) malloc (sizeof(char) * (size + 1)));
	if (!ptr)
		return (NULL);
	ptr[size] = '\0';
	while (size > 0)
	{
		size--;
		ptr[size] = base[nbr % 16];
		nbr = nbr / 16;
	}
	return (ptr);
}


int	ft_put_pointer(void *nbr, char *base)
{
	int	ret;
	char *str;
	unsigned long a;

	a = (unsigned long) nbr;
	str = ft_put_hexa_to_str(a, base);
	ret = ft_putstr(str);
	free(str);
	return (ret);
}
