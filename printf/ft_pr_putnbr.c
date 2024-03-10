/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cagonza2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 12:51:10 by cagonza2          #+#    #+#             */
/*   Updated: 2023/10/22 19:37:38 by cagonza2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_pr_putnbr(int nb, int counter)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		counter += 11;
	}
	else
	{
		if (nb < 0)
		{
			nb *= -1;
			write(1, "-", 1);
			counter += 1;
		}
		if (nb > 9)
		{
			counter = ft_pr_putnbr(nb / 10, counter);
			counter = ft_pr_putnbr(nb % 10, counter);
		}
		else
		{
			counter += ft_pr_putchar(nb + '0');
		}
	}
	return (counter);
}
