/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_argv.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cagonza2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 12:58:56 by cagonza2          #+#    #+#             */
/*   Updated: 2024/02/20 17:19:18 by cagonza2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_check_argv(char *argv)
{
	int	i;
	int	check;

	i = 0;
	check = 1;
	while (argv[i])
	{
		if ((argv[i] >= 'A' && argv[i] <= 'Z') \
				|| (argv[i] >= 'a' && argv[i] <= 'z'))
			return (0);
		if (argv[i] == '-')
			if (!(argv[i + 1] >= '0' && argv[i + 1] <= '9'))
				return (0);
		i += 1;
	}
	if (!ft_atoi_check(argv, &check) && argv[0] != '0' && argv[1] != '0')
		return (0);
	if (!check)
		return (0);
	return (1);
}

int	ft_check(char **split)
{
	int	i;
	int	count_errors;

	i = 0;
	count_errors = 0;
	while (split[i])
	{
		if (!ft_check_argv(split[i]))
			count_errors += 1;
		free(split[i]);
		i += 1;
	}
	free(split);
	if (!count_errors)
		return (1);
	else
		return (0);
}

int	ft_check_argvs(char *argv)
{
	char	**split;

	split = ft_split(argv, ' ');
	if (!split)
		return (0);
	if (!split[0])
	{
		free(split);
		return (0);
	}
	return (ft_check(split));
}

int	ft_check_last_dup(t_Stack *s, int last)
{
	t_Node	*aux;

	aux = s->upper;
	while (aux->next)
	{
		if (aux->element == last)
			return (0);
		aux = aux->next;
	}
	return (1);
}

int	ft_check_dup(t_Stack *s)
{
	t_Node	*aux;
	t_Node	*verify;

	verify = s->upper;
	while (verify->next)
	{
		aux = verify->next;
		while (aux->next)
		{
			if (aux->element == verify->element)
				return (0);
			aux = aux->next;
		}
		verify = verify->next;
	}
	return (ft_check_last_dup(s, verify->element));
}
