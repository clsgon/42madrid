/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cagonza2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 13:34:29 by cagonza2          #+#    #+#             */
/*   Updated: 2023/10/29 13:38:21 by cagonza2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_to_str(va_list arg, char type, int counter)
{
	char	*u_hex_code;
	char	*l_hex_code;

	u_hex_code = "0123456789ABCDEF";
	l_hex_code = "0123456789abcdef";
	if (type == 'c')
		counter += ft_pr_putchar(va_arg(arg, int));
	if (type == 's')
		counter = ft_pr_putstr(va_arg(arg, char *), counter);
	if (type == 'p')
		counter = ft_point_hex(va_arg(arg, void *), l_hex_code, counter);
	if (type == 'i' || type == 'd')
		counter = ft_pr_putnbr(va_arg(arg, int), counter);
	if (type == 'u')
		counter = ft_putuns(va_arg(arg, unsigned int), counter);
	if (type == 'x')
		counter = ft_hexprint(va_arg(arg, unsigned int), l_hex_code, counter);
	if (type == 'X')
		counter = ft_hexprint(va_arg(arg, unsigned int), u_hex_code, counter);
	if (type == '%')
		counter += ft_pr_putchar('%');
	return (counter);
}

int	ft_printf(char const *str, ...)
{
	va_list		arg;
	int			i;
	int			counter;

	counter = 0;
	if (!str)
		return (0);
	va_start(arg, str);
	i = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			counter = ft_to_str(arg, str[i + 1], counter);
			i += 1;
		}
		else
		{
			write(1, &str[i], 1);
			counter += 1;
		}
		i += 1;
	}
	va_end(arg);
	return (counter);
}
