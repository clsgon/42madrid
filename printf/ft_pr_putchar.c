/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pr_putchar.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cagonza2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 13:39:25 by cagonza2          #+#    #+#             */
/*   Updated: 2023/10/29 13:39:27 by cagonza2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_pr_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}
