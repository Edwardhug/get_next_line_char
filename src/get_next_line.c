/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgabet <lgabet@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 10:32:15 by lgabet            #+#    #+#             */
/*   Updated: 2023/01/06 14:11:57 by lgabet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/get_next_line.h"

char	*get_next_line(int fd)
{
	static char	*line;
	char		*str_ret;

	if (fd < 0 || read(fd, line, 0) < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	// 1. fill line
	line = ft_fill_line(fd, line);
	if (!line)
		return (NULL);
	// 2. fill str_ret
	// 3. clear line
	return (line);
}

char	*ft_fill_line(int fd, char *line)
{
	int		size_read;
	char	*to_return;
	char	buffer[BUFFER_SIZE + 1];
	int		i;
	int		j;

	size_read = 1;
	i = 0;
	if (line)
	{
		to_return = malloc(sizeof(char) * (ft_strlen(line) + 1));
		if (!to_return)
			return (NULL);
		while(line[i++])
			to_return[i] = line[i];
	}
	while (size_read != 0)
	{
		j = 0;
		size_read = read(fd, buffer, BUFFER_SIZE);
		//printf("%s\n", buffer);
		if (have_newline(buffer))
		{
			to_return = malloc(sizeof(char) * (i + size_read));
			while (size_read > j)
				to_return[i++] = buffer[j++];
			to_return[i] = 0;
			return (to_return);
		}
		else
		{
			to_return = malloc(sizeof(char) * (i + size_read));
			while (size_read> j)
				to_return[i++] = buffer[j++];
			printf("%s\n", to_return);
			free(to_return);
		}
	}
	return (to_return);
}
