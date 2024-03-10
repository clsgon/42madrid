/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cagonza2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 12:40:25 by cagonza2          #+#    #+#             */
/*   Updated: 2024/02/20 17:19:08 by cagonza2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STACK_H
# define STACK_H

typedef struct node
{
	int			element;
	int			position;
	struct node	*next;
}	t_Node;

typedef struct stack
{
	t_Node	*upper;
	int		size;
}	t_Stack;
t_Node	*ft_create_node(int new_element, int position);
void	ft_delete_node(t_Node *node);
t_Stack	*ft_create_stack(void);
void	ft_delete_stack(t_Stack *s);
int		ft_push(t_Stack *s, int element);
int		ft_push2(t_Stack *s, int element, int position);
void	ft_pull(t_Stack *s);
int		ft_get_min(t_Stack *s);
#endif
