/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cagonza2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 13:24:34 by cagonza2          #+#    #+#             */
/*   Updated: 2023/10/29 13:24:35 by cagonza2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

int		ft_pr_putnbr(int nb, int counter);
int		ft_putuns(unsigned int nb, int counter);
int		ft_hexprint(unsigned long n, char *code, int counter);
void	*ft_calloc(size_t nmemb, size_t size);
void	ft_bzero(void *s, size_t n);
int		ft_pr_putchar(char c);
int		ft_pr_putstr(char	*str, int counter);
int		ft_point_hex(void *point, char *code, int counter);
int		ft_printf(char const *str, ...);

#endif
