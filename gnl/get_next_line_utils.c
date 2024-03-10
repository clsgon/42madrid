/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cagonza2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 14:54:37 by cagonza2          #+#    #+#             */
/*   Updated: 2023/12/16 13:49:29 by cagonza2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "get_next_line.h"

size_t	ft_strlen(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strchr(char *s, int c)
{
	int	i;

	i = 0;
	if (!s)
		return (NULL);
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)&s[i] + 1);
		i += 1;
	}
	if ((char)c == '\0')
		return ((char *)&s[i]);
	return (NULL);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*result;
	int		i;
	int		j;

	if (!s1 || !s2)
		return (NULL);
	result = (char *)malloc(sizeof(char) * ((ft_strlen(s1)
					+ ft_strlen(s2)) + 1));
	if (!result)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i])
	{
		result[i] = s1[i];
		i += 1;
	}
	while (s2[j])
		result[i++] = s2[j++];
	free(s1);
	result[i] = '\0';
	return (result);
}

char	*ft_strdup(char *s)
{
	char	*result;
	int		size;
	int		i;

	size = ft_strlen(s) + 1;
	result = (char *)malloc(size * sizeof(char));
	if (!result)
		return (NULL);
	i = 0;
	while (s[i])
	{
		result[i] = s[i];
		i += 1;
	}
	result[i] = '\0';
	return (result);
}

void	*ft_calloc(size_t count, size_t size)
{
	void			*m;
	size_t			i;
	unsigned char	*l;

	m = (void *)malloc(count * size);
	if (!m)
		return (NULL);
	l = m;
	i = 0;
	while (i < (count * size))
	{
		l[i] = 0;
		i += 1;
	}
	return (m);
}
