/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_op.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cagonza2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 18:35:13 by cagonza2          #+#    #+#             */
/*   Updated: 2024/02/20 17:18:09 by cagonza2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_push(t_Stack *s, int element)
{
	t_Node	*node;

	node = ft_create_node(element, 0);
	node->next = s->upper;
	s->upper = node;
	s->size += 1;
	return (1);
}

int	ft_push2(t_Stack *s, int element, int position)
{
	t_Node	*node;

	node = ft_create_node(element, position);
	if (!node)
		return (0);
	node->next = s->upper;
	s->upper = node;
	s->size += 1;
	return (1);
}

void	ft_pull(t_Stack *s)
{
	t_Node	*delete;

	if (s->upper)
	{
		delete = s->upper;
		s->upper = s->upper->next;
		ft_delete_node(delete);
		s->size -= 1;
	}
}

int	ft_get_min(t_Stack *s)
{
	t_Node	*aux;
	int		min;

	aux = s->upper->next;
	min = s->upper->element;
	while (aux)
	{
		if (aux->element < min)
			min = aux->element;
		aux = aux->next;
	}
	return (min);
}
