# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cagonza2 <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/19 20:23:03 by cagonza2          #+#    #+#              #
#    Updated: 2024/02/20 17:19:57 by cagonza2         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

CC = gcc

CFLAGS = -Wall -Wextra -Werror

RM = rm -f

LIB = ar rcs

SRCS = push_swap.c ft_check_argv.c ft_insert_elements.c ft_atoi_check.c \
	   stack/stack.c operations/ft_swap.c operations/ft_push.c operations/ft_rotate.c operations/ft_reverse.c stack/stack_op.c\
	   ft_sort.c ft_position.c ft_big_sort.c ft_binary.c ft_set_positions.c\
	   libft/ft_split.c libft/ft_atoi.c libft/ft_substr.c libft/ft_strlen.c libft/ft_calloc.c libft/ft_bzero.c\

OBJTS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJTS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJTS)

clean:
	$(RM) $(OBJTS)

fclean: clean
	$(RM) $(NAME)
	$(RM) $(OBJTS)

re: all clean

.PHONY: all clean fclean re

