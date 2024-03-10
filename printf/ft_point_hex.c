/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_point_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cagonza2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 13:31:11 by cagonza2          #+#    #+#             */
/*   Updated: 2023/10/29 13:31:35 by cagonza2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_point_hex(void *point, char *code, int counter)
{
	unsigned long	p;

	p = (unsigned long)point;
	counter = ft_pr_putstr("0x", counter);
	counter = ft_hexprint(p, code, counter);
	return (counter);
}
