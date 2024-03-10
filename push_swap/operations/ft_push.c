/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cagonza2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 17:44:51 by cagonza2          #+#    #+#             */
/*   Updated: 2024/02/20 17:15:06 by cagonza2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_op_push(t_Stack *s, t_Stack *t)
{
	if (s->size > 0)
	{
		ft_push2(t, s->upper->element, s->upper->position);
		ft_pull(s);
	}
}

void	ft_pa(t_Stack *a, t_Stack *b)
{
	ft_op_push(b, a);
	write(1, "pa\n", 3);
}

void	ft_pb(t_Stack *b, t_Stack *a)
{
	ft_op_push(a, b);
	write(1, "pb\n", 3);
}
