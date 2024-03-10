/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexprint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cagonza2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 13:25:24 by cagonza2          #+#    #+#             */
/*   Updated: 2023/10/29 13:49:21 by cagonza2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_digits(unsigned long n)
{
	unsigned long	count;

	count = 0;
	while (n)
	{
		n /= 16;
		count += 1;
	}
	return (count);
}

//ints[]: 0 -> rest, 1 -> i, 2 -> digits
int	ft_hexprint(unsigned long n, char *code, int counter)
{
	int		ints[3];
	char	*hex;

	if (!n)
		counter += ft_pr_putchar('0');
	else
	{
		ints[2] = ft_digits(n);
		hex = ft_calloc(ints[2] + 1, sizeof(char));
		if (!hex)
			return (0);
		ints[1] = ints[2] - 1;
		while (n >= 16)
		{
			ints[0] = n % 16;
			n /= 16;
			hex[ints[1]] = code[ints[0]];
			ints[1] -= 1;
		}
		hex[ints[1]] = code[n];
		counter = ft_pr_putstr(hex, counter);
		free(hex);
	}
	return (counter);
}
