/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cagonza2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 13:13:01 by cagonza2          #+#    #+#             */
/*   Updated: 2024/02/20 17:22:22 by cagonza2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_three(t_Stack *a)
{
	if (ft_max_upper(a))
		ft_ra(a);
	else if (ft_max_bottom(a))
		ft_sa(a);
	else
		ft_rra(a);
	if (!ft_check_sort(a))
		ft_sort_three(a);
}

void	ft_sort_four_five(t_Stack *a, t_Stack *b)
{
	int	min;

	min = ft_get_min(a);
	if (a->upper->next->element == min)
		ft_ra(a);
	else
		while (a->upper->element != min)
			ft_rra(a);
	ft_pb(b, a);
	if (a->size == 3)
		ft_sort_three(a);
	else
		ft_sort_four_five(a, b);
	ft_pa(a, b);
}

int	ft_check_sort(t_Stack *s)
{
	t_Node	*aux;

	aux = s->upper;
	while (aux->next)
	{
		if (aux->element > aux->next->element)
			return (0);
		aux = aux->next;
	}
	return (1);
}

void	ft_sort(t_Stack *a, t_Stack *b)
{
	if (ft_check_sort(a) != 1)
	{
		if (a->size == 2)
			ft_sa(a);
		else if (a->size == 3)
			ft_sort_three(a);
		else if (a->size == 4 || a->size == 5)
			ft_sort_four_five(a, b);
		else
			ft_big_sort(a, b);
	}
}
