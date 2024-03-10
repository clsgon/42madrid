/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cagonza2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 18:01:59 by cagonza2          #+#    #+#             */
/*   Updated: 2024/02/20 16:59:15 by cagonza2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_op_rotate(t_Stack *s)
{
	t_Node	*first;
	t_Node	*last;

	if (s->size > 1)
	{
		first = s->upper;
		s->upper = first->next;
		last = first;
		while (last->next)
			last = last->next;
		last->next = first;
		first->next = NULL;
	}
}

void	ft_ra(t_Stack *a)
{
	ft_op_rotate(a);
	write(1, "ra\n", 3);
}

void	ft_rb(t_Stack *b)
{
	ft_op_rotate(b);
	write(1, "rb\n", 3);
}

void	ft_rr(t_Stack *a, t_Stack *b)
{
	ft_op_rotate(a);
	ft_op_rotate(b);
}
