NAME = libftprintf.a
SOURCES = ft_printf.c ft_printf_f_aux.c 
OBJECTS = $(SOURCES:.c=.o)
LIBFT_OBJECTS = libft/*.o

CC = gcc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJECTS) libft
    $(AR) -r $@ $(OBJECTS) $(LIBFT_OBJECTS)

%.o: %.c
    $(CC) -c $(CFLAGS) $?

libft:
    make -C libft

clean:
    rm -f $(OBJECTS)
    make -C libft clean

fclean: clean
    rm -f $(NAME) libft/libft.a

re: fclean all

.PHONY: all bonus libft clean fclean re

