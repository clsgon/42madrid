/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cagonza2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 14:20:33 by cagonza2          #+#    #+#             */
/*   Updated: 2023/12/16 13:51:02 by cagonza2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "get_next_line.h"

char	*ft_line(char *aux)
{
	char	*result;
	int		len;

	len = 0;
	if (!aux[len])
		return (NULL);
	while (aux[len] && aux[len] != '\n')
		len += 1;
	if (aux[len] == '\n')
		len += 1;
	result = (char *)ft_calloc(len + 1, sizeof(char));
	if (!result)
		return (NULL);
	len = 0;
	while (aux[len] && aux[len] != '\n')
	{
		result[len] = aux[len];
		len += 1;
	}
	if (aux[len] == '\n')
		result[len] = '\n';
	return (result);
}

char	*ft_update_aux(char *aux)
{
	char	*result;
	int		len;
	int		i;

	len = 0;
	while (aux[len] && aux[len] != '\n')
		len += 1;
	if (!aux[len])
	{
		free(aux);
		return (NULL);
	}
	result = (char *)ft_calloc((ft_strlen(aux) - len) + 1, sizeof(char));
	if (!result)
	{
		free(aux);
		return (NULL);
	}
	i = 0;
	len += 1;
	while (aux[len])
		result[i++] = aux[len++];
	free(aux);
	return (result);
}

char	*ft_reading(int fd, char *buffer, char *aux)
{
	int		bytes;

	bytes = 1;
	while (bytes && !ft_strchr(aux, '\n'))
	{
		bytes = read(fd, buffer, BUFFER_SIZE);
		if (bytes == -1)
		{
			free(buffer);
			free(aux);
			return (NULL);
		}
		buffer[bytes] = 0;
		aux = ft_strjoin(aux, buffer);
	}
	free(buffer);
	return (aux);
}

char	*ft_pre_read(int fd, char *aux)
{
	char	*buffer;

	if (!aux)
		aux = ft_calloc(1, 1);
	if (!aux)
		return (NULL);
	buffer = (char *)ft_calloc(BUFFER_SIZE + 1, sizeof(char));
	if (!buffer)
	{
		free(aux);
		return (NULL);
	}
	return (ft_reading(fd, buffer, aux));
}

char	*get_next_line(int fd)
{
	static char	*aux;
	char		*line;

	if (fd < 0 || BUFFER_SIZE < 0)
		return (NULL);
	aux = ft_pre_read(fd, aux);
	if (!aux)
		return (NULL);
	line = ft_line(aux);
	if (!line)
	{
		free(aux);
		aux = NULL;
		return (NULL);
	}
	aux = ft_update_aux(aux);
	return (line);
}
