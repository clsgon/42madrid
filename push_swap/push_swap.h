/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cagonza2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 13:01:20 by cagonza2          #+#    #+#             */
/*   Updated: 2024/02/20 17:03:12 by cagonza2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <unistd.h>
# include <stdlib.h>
# include <limits.h>
# include "libft/libft.h"
# include "stack/stack.h"
# include "operations/operations.h"

int		ft_check_argv(char *argv);
int		ft_check_argvs(char *argv);
int		ft_check_dup(t_Stack *s);
int		ft_atoi_check(const char *str, int *check);
t_Stack	*ft_insert_elements(char **argv);
void	ft_sort(t_Stack *a, t_Stack *b);
int		ft_check_sort(t_Stack *s);
void	ft_big_sort(t_Stack	*a, t_Stack *b);
int		*ft_binary(int num);
int		ft_digits(int num);
int		ft_check_positions(t_Stack *s);
void	ft_set_positions(t_Stack *s);
#endif
