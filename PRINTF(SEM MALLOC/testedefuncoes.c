/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   testedefuncoes.c								   :+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: fpinho-d <fpinho-d@student.42.fr>		  +#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2023/01/23 17:13:19 by fpinho-d		  #+#	#+#			 */
/*   Updated: 2023/01/23 18:15:22 by fpinho-d		 ###   ########.fr	   */
/*																			*/
/* ************************************************************************** */

# include "ft_printf.h"

int main()
{
	char a = 'D';
	char b [] = "(null)";
	char c [] = "Filipe";
	int d = -10;
	unsigned int	e = 255;
	 
	printf("Original: %c %s %s %d %u %x\n", a, b, c, d, e, e);
	ft_printf("Meu: %c %s %s %d %u %x\n", a, b, c, d, e, e);
}