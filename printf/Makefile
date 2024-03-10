NAME = libftprintf.a
SRC = ft_printf.c ft_pr_putnbr.c ft_hexprint.c ft_calloc.c ft_bzero.c \
	  ft_pr_putchar.c ft_pr_putstr.c ft_point_hex.c ft_putuns.c 

OBJ = $(SRC:.c=.o)
AR = ar rcs
CC = gcc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) -r $@ $?

%.o: %.c
	$(CC) -c $(CFLAGS) $?

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re
