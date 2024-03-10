/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cagonza2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 12:47:57 by cagonza2          #+#    #+#             */
/*   Updated: 2024/02/20 17:15:55 by cagonza2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../push_swap.h"

t_Node	*ft_create_node(int new_element, int position)
{
	t_Node	*node;

	node = (t_Node *)malloc(sizeof(t_Node));
	if (!node)
		return (NULL);
	node->element = new_element;
	node->position = position;
	node->next = NULL;
	return (node);
}

void	ft_delete_node(t_Node *node)
{
	node->next = NULL;
	free(node);
}

t_Stack	*ft_create_stack(void)
{
	t_Stack	*new_stack;

	new_stack = (t_Stack *)malloc(sizeof(t_Stack));
	if (!new_stack)
		return (NULL);
	new_stack->upper = NULL;
	new_stack->size = 0;
	return (new_stack);
}

void	ft_delete_stack(t_Stack *s)
{
	while (s->upper)
		ft_pull(s);
	free(s);
}
