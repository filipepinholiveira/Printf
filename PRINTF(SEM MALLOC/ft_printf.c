/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpinho-d <fpinho-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 15:39:06 by fpinho-d          #+#    #+#             */
/*   Updated: 2023/01/23 18:28:31 by fpinho-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ft_printf.h"

int    ft_print_arg(va_list arg, char c)
{
    int len_str;
    if (c == 'c')
        len_str += ft_putchar(va_arg(arg, int));
    if (c == 's')
        len_str += ft_putstr(va_arg(arg, char *));
    if ((c == 'd') || (c == 'i'))
        len_str += ft_putnbr(va_arg(arg, int));
    if (c == 'u')
        len_str += ft_putnbr_u(va_arg(arg, unsigned int));
    return (len_str);
}

int ft_printf(const char *conteudo, ...)
{
    va_list arg;
    int i;
    int retorno;

    va_start (arg, conteudo);
    i = 0;
    retorno = 0;
    while (conteudo[i])
    {
        if (conteudo[i] == '%')
        {
            i++;
            retorno += ft_print_arg(arg, conteudo[i]);
        }
        else
            retorno += ft_putchar(conteudo[i]);
        i++;
    }
    va_end(arg);
    return (retorno);
}

int main()
{
    char a = 'D';
    char b [] = "(null)";
    char c [] = "Filipe";
    int d = -10;
    unsigned int    e = 100000;
     
    printf("Original: %c %s %s %d %u\n", a, b, c, d, e);
    ft_printf("Meu: %c %s %s %d %u\n", a, b, c, d, e);
}