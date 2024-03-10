/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_position.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cagonza2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 17:37:57 by cagonza2          #+#    #+#             */
/*   Updated: 2024/02/20 16:55:33 by cagonza2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_max_upper(t_Stack *s)
{
	t_Node	*aux;
	int		upper;

	aux = s->upper->next;
	upper = s->upper->element;
	while (aux)
	{
		if (aux->element > upper)
			upper = aux->element;
		aux = aux->next;
	}
	free(aux);
	if (upper == s->upper->element)
		return (1);
	return (0);
}

int	ft_max_bottom(t_Stack *s)
{
	t_Node	*aux;
	int		save;
	int		last;

	aux = s->upper;
	while (aux->next)
		aux = aux->next;
	last = aux->element;
	save = last;
	aux = s->upper;
	while (aux)
	{
		if (aux->element > last)
			save = aux->element;
		aux = aux->next;
	}
	free(aux);
	if (save == last)
		return (1);
	return (0);
}
