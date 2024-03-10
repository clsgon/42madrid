/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cagonza2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 15:08:54 by cagonza2          #+#    #+#             */
/*   Updated: 2024/02/20 16:58:29 by cagonza2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef OPERATIONS_H
# define OPERATIONS_H
# include "../push_swap.h"

void	ft_op_swap(t_Stack *s);
void	ft_op_push(t_Stack *s, t_Stack *t);
void	ft_op_rotate(t_Stack *s);
void	ft_op_reverse(t_Stack *s);
void	ft_sa(t_Stack *a);
void	ft_sb(t_Stack *b);
void	ft_ss(t_Stack *a, t_Stack *b);
void	ft_pa(t_Stack *a, t_Stack *b);
void	ft_pb(t_Stack *b, t_Stack *a);
void	ft_ra(t_Stack *a);
void	ft_rb(t_Stack *b);
void	ft_rr(t_Stack *a, t_Stack *b);
void	ft_rra(t_Stack *a);
void	ft_rrb(t_Stack *b);
void	ft_rrr(t_Stack *a, t_Stack *b);
int		ft_max_upper(t_Stack *s);
int		ft_max_bottom(t_Stack *s);

#endif
