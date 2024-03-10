/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cagonza2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 17:00:00 by cagonza2          #+#    #+#             */
/*   Updated: 2024/02/20 17:14:49 by cagonza2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../push_swap.h"

void	ft_op_swap(t_Stack *s)
{
	int	aux;
	int	aux_2;

	if (s->size > 1)
	{
		aux = s->upper->element;
		ft_pull(s);
		aux_2 = s->upper->element;
		ft_pull(s);
		ft_push(s, aux);
		ft_push(s, aux_2);
	}
}

void	ft_sa(t_Stack *a)
{
	ft_op_swap(a);
	write(1, "sa\n", 3);
}

void	ft_sb(t_Stack *b)
{
	ft_op_swap(b);
	write(1, "sb\n", 3);
}

void	ft_ss(t_Stack *a, t_Stack *b)
{
	ft_sa(a);
	ft_sb(b);
}
