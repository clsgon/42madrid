/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cagonza2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 12:35:56 by cagonza2          #+#    #+#             */
/*   Updated: 2024/02/20 16:59:03 by cagonza2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_op_reverse(t_Stack *s)
{
	t_Node	*first;
	t_Node	*prelast;
	t_Node	*last;

	if (s->size > 1)
	{
		first = s->upper;
		prelast = first;
		while (prelast->next->next != NULL)
			prelast = prelast->next;
		last = prelast->next;
		s->upper = last;
		last->next = first;
		prelast->next = NULL;
	}
}

void	ft_rra(t_Stack *a)
{
	ft_op_reverse(a);
	write(1, "rra\n", 4);
}

void	ft_rrb(t_Stack *b)
{
	ft_op_reverse(b);
	write(1, "rrb\n", 4);
}

void	ft_rrr(t_Stack *a, t_Stack *b)
{
	ft_rra(a);
	ft_rrb(b);
}
