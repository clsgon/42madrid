/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_insert_elements.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cagonza2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 14:19:10 by cagonza2          #+#    #+#             */
/*   Updated: 2024/02/20 17:11:40 by cagonza2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_count_elements(char **elements)
{
	int	i;
	int	counter;

	i = 0;
	counter = 0;
	while (elements[i])
	{
		counter += 1;
		i += 1;
	}
	return (counter);
}

int	ft_push_elements(t_Stack *result, char **split)
{
	int	counter;

	counter = ft_count_elements(split);
	while (counter)
	{
		if (!ft_push(result, ft_atoi(split[counter - 1])))
			return (0);
		free(split[counter - 1]);
		counter -= 1;
	}
	free(split);
	return (1);
}

t_Stack	*ft_insert_elements(char **argv)
{
	t_Stack	*result;
	char	**split;
	int		j;
	int		counter;

	result = ft_create_stack();
	if (!result)
		return (NULL);
	counter = ft_count_elements(argv);
	j = counter - 1;
	while (counter > 1)
	{
		if (argv[j][0] != '.')
		{
			split = ft_split(argv[j], ' ');
			if (!split)
				return (NULL);
			if (!ft_push_elements(result, split))
				return (NULL);
		}
		counter -= 1;
		j -= 1;
	}
	return (result);
}
