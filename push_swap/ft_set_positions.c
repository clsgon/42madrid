/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_positions.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cagonza2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 16:17:00 by cagonza2          #+#    #+#             */
/*   Updated: 2024/02/20 16:38:53 by cagonza2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_Node	*ft_get_min_node(t_Stack *s)
{
	t_Node	*aux;
	t_Node	*result;
	int		min;

	if (s->size == 1)
		return (s->upper);
	aux = s->upper->next;
	min = s->upper->element;
	result = s->upper;
	while (aux)
	{
		if (aux->element < min)
		{
			min = aux->element;
			result = aux;
		}
		aux = aux->next;
	}
	return (result);
}

int	ft_get_last_pos(t_Stack *s)
{
	t_Node	*aux;
	int		last;

	aux = s->upper;
	last = 0;
	while (aux)
	{
		if (aux->position > last)
			last = aux->position;
		aux = aux->next;
	}
	return (last);
}

void	ft_part_set(t_Stack *s, t_Node *aux, int *min)
{
	t_Node	*aux2;
	int		gap;

	gap = 0;
	if (aux->element > *min)
	{
		gap = aux->element - *min;
		aux2 = s->upper;
		while (aux2)
		{
			if (aux2->element > *min)
			{
				if (aux2->element - *min < gap)
					gap = aux2->element - *min;
			}
			aux2 = aux2->next;
		}
		if (aux->element - *min == gap)
		{
			aux->position = ft_get_last_pos(s) + 1;
			*min = aux->element;
		}
	}
}

void	ft_set_positions(t_Stack *s)
{
	int		min;
	t_Node	*aux;

	min = ft_get_min_node(s)->element;
	while (!ft_check_positions(s))
	{
		aux = s->upper;
		while (aux)
		{
			ft_part_set(s, aux, &min);
			aux = aux->next;
		}
	}
}

int	ft_check_positions(t_Stack *s)
{
	t_Node	*aux;
	int		counter;

	aux = s->upper;
	counter = 0;
	while (aux)
	{
		if (aux->position == 0)
			counter += 1;
		aux = aux->next;
	}
	if (counter > 1)
		return (0);
	return (1);
}
