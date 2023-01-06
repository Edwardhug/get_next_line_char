/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgabet <lgabet@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 10:32:15 by lgabet            #+#    #+#             */
/*   Updated: 2023/01/06 16:11:19 by lgabet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/get_next_line.h"

char	*get_next_line(int fd)
{
	static char	buff[BUFFER_SIZE + 1] = "\0";
	char		*line;

	if (fd < 0 || read(fd, buff, 0) < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	// 1. fill line
	line = ft_fill_line(fd, buff);
	if (!line)
		return (NULL);
	// 2. clear line
	return (line);
}

char	*ft_fill_line(int fd, char *buff)
{
	int	size_readed;
	char	*str;
	
	str = NULL;
	while (1)
	{
		size_readed = read(fd, buff, BUFFER_SIZE);
		buff[size_readed] = 0;
		if (!have_newline(buff))
		{
			str = ft_strjoin(str, buff, ft_lenline(str, buff));
			if (!str)
				return (NULL);
		}
		else
		{
			str = ft_strjoin(str, buff, ft_lenline(str, buff));
			if (!str)
				return (NULL);
			break ;
		}
	}
	return (str);
}