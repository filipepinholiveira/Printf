/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   ft_putstr.c										:+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: fpinho-d <fpinho-d@student.42.fr>		  +#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2023/01/23 16:55:47 by fpinho-d		  #+#	#+#			 */
/*   Updated: 2023/01/23 18:39:27 by fpinho-d		 ###   ########.fr	   */
/*																			*/
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *str)
{
	int	i;

	if (!str)
		return (write(1, "(null)", 6));
	i = 0;
	while (str[i])
	{
		write (1, &str[i], 1);
		i++;
	}
	return (i);
}
