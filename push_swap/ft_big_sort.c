/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_big_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cagonza2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 11:49:38 by cagonza2          #+#    #+#             */
/*   Updated: 2024/02/20 16:36:16 by cagonza2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

int	ft_max_digits(t_Stack *s)
{
	int		max;
	t_Node	*aux;

	max = ft_digits(s->upper->position);
	aux = s->upper->next;
	while (aux)
	{
		if (ft_digits(aux->position) > max)
			max = ft_digits(aux->position);
		aux = aux->next;
	}
	return (max);
}

int	ft_raro(int num, int i)
{
	return ((num >> i) & 1);
}

void	ft_big_sort(t_Stack *a, t_Stack *b)
{
	int	counter[2];
	int	size;
	int	digits;

	size = a->size;
	digits = ft_max_digits(a);
	counter[0] = 0;
	while (counter[0] < digits)
	{
		counter[1] = 0;
		while (counter[1] < size)
		{
			if (ft_raro(a->upper->position, counter[0]))
				ft_ra(a);
			else
				ft_pb(b, a);
			counter[1] += 1;
		}
		while (b->size > 0)
			ft_pa(a, b);
		counter[0] += 1;
	}
}
