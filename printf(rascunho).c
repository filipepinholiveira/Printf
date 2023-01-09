#include <stdio.h>
#include <stdarg.h>



* -> 4 bytes 

(void *) -> char*
	|
	. -> int *

#include <stdlib.h>

malloc => void *

while (format_line != '\0')
{
	int count = 0;

	if (*format_line == '%' && next_symbol_exist())
	{
		if (*(format_line + 1) == 'd' || == 'i')
			count += print_decimal(va_arg(list, int));
		else if (*(format_line + 1) == 's')
			count += ft_putstr(va_arg(list, char *));
		else if ('x')

		else if ('c')

		else if ('p')
			1) covert int to heximal & save that hec in string
			

	}
	return count;
}

int main(void)
{
	if ('-')
		ft_printf("%-s", heximal_line);
	printf("%#X\n", "-424242");
	42 -> 'x' -> 2a
	42 -> 'X' -> 2A
	"%#X" -> 0X2A
	"%#x" -> 0x2a
	" +#"
	
	printf("%.5d\n", -424242);
	return (0);
}
