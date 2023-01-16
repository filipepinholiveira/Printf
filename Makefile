CC			= gcc
CFLAGS		= -Wall -Wextra -Werror

all: FT_PRINTF

ft_printf:		ft_printf.o
			$(CC) $(CFLAGS) -o ft_printf ft_printf.o

ft_printf.o: ft_printf.c ft_printf_aux.c libftprint.h



