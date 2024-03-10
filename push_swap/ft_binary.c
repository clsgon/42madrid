/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_binary.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cagonza2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 13:28:11 by cagonza2          #+#    #+#             */
/*   Updated: 2024/02/20 16:46:08 by cagonza2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

int	ft_digits(int element)
{
	int	counter;

	if (element == 0)
		return (1);
	counter = 0;
	while (element > 0)
	{
		counter += 1;
		element = element / 2;
	}
	return (counter);
}
