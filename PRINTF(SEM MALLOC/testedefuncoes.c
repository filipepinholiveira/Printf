/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testedefuncoes.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpinho-d <fpinho-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 17:13:19 by fpinho-d          #+#    #+#             */
/*   Updated: 2023/01/23 18:15:22 by fpinho-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ft_printf.h"

int ft_putstr(char *str)
{
    int i;

    if (!str)
        return write(1, (NULL), 6);
    i = 0;
    while (str[i])
    {
        write (1, &str[i], 1);
        i++;
    }
    return (i);
}

int main()
{
    char a [] = "Filipe";
    ft_putstr(a);
}