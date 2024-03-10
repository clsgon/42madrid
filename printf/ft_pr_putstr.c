/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pr_putstr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cagonza2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 13:41:17 by cagonza2          #+#    #+#             */
/*   Updated: 2023/10/29 13:41:19 by cagonza2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_pr_putstr(char *str, int counter)
{
	int	i;

	if (!str)
	{
		write(1, "(null)", 6);
		return (counter + 6);
	}
	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i += 1;
		counter += 1;
	}
	return (counter);
}
