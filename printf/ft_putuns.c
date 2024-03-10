/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cagonza2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 12:51:10 by cagonza2          #+#    #+#             */
/*   Updated: 2023/10/29 13:37:19 by cagonza2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putuns(unsigned int nb, int counter)
{
	if (nb > 9)
	{
		counter = ft_putuns(nb / 10, counter);
		counter = ft_putuns(nb % 10, counter);
	}
	else
		counter += ft_pr_putchar(nb + '0');
	return (counter);
}
