/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cagonza2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 12:35:26 by cagonza2          #+#    #+#             */
/*   Updated: 2024/02/20 17:22:12 by cagonza2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	get_leaks(void)
{
	system("leaks -q a.out");
}

int	ft_run(char **argv)
{
	t_Stack	*a;
	t_Stack	*b;

	a = ft_insert_elements(argv);
	b = ft_create_stack();
	if (!a || !b)
		return (0);
	if (!ft_check_dup(a))
	{
		write(1, "Error\n", 6);
		ft_delete_stack(a);
		ft_delete_stack(b);
		return (0);
	}
	ft_set_positions(a);
	ft_sort(a, b);
	ft_delete_stack(a);
	ft_delete_stack(b);
	return (0);
}

int	main(int argc, char **argv)
{
	char	**aux;

	if (argc > 1)
	{
		aux = argv;
		aux++;
		while (*aux)
		{
			if (!ft_check_argvs(*aux))
			{
				write(1, "Error\n", 6);
				return (0);
			}
			aux++;
		}
		aux = argv;
		return (ft_run(aux));
	}
	write(1, "Error\n", 6);
	return (0);
}
