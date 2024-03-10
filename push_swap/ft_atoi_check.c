/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cagonza2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 12:55:46 by cagonza2          #+#    #+#             */
/*   Updated: 2024/02/20 16:35:07 by cagonza2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_check_space_check(char first)
{
	if (first == '\n')
		return (1);
	else if (first == '\t')
		return (1);
	else if (first == '\v')
		return (1);
	else if (first == '\f')
		return (1);
	else if (first == '\r')
		return (1);
	else if (first == ' ')
		return (1);
	return (0);
}

long	ft_part_check(const char *str, long num, int *sig)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (ft_check_space_check(str[i]) == 0)
			break ;
		i += 1;
	}
	if (str[i] == '-')
	{
		*sig *= -1;
		i += 1;
	}
	else if (str[i] == '+')
		i += 1;
	while (str[i])
	{
		if (str[i] >= 48 && str[i] <= 57)
			num = (str[i] - '0') + (num * 10);
		else
			break ;
		i += 1;
	}
	return (num);
}

int	ft_atoi_check(const char *str, int *check)
{
	long	num;
	int		sig;

	num = 0;
	sig = 1;
	num = ft_part_check(str, num, &sig);
	if (num > ((long) INT_MAX + 1) && sig == -1)
		*check = 0;
	if (num > INT_MAX && sig == 1)
		*check = 0;
	return (num * sig);
}
