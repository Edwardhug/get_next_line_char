/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgabet <lgabet@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 10:44:03 by lgabet            #+#    #+#             */
/*   Updated: 2023/01/06 16:11:14 by lgabet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/get_next_line.h"

char	*ft_strjoin(char *s1, char *s2, int size)
{
	char	*str;
	int		i;
	int		j;

	str = malloc(sizeof(char) * (size + 1));
	if (!str)
		return (NULL);
	i = 0;
	j = 0;
	if (s1)
	{
		while (s1[i])
		{
			str[i] = s1[i];
			i++;
		}
	}
	while (s2[j] && s2[j] != '\n')
	{
		str[i] = s2[j];
		i++;
		j++;
	}
	str[i] = 0;
	return (str);
}

int	ft_lenline(char *str, char *buff)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (str)
	{
		while (str[i])
			i++;
	}
	if (buff)
	{
		while (buff[j])
		{
			if (buff[j] == '\n')
				return (i + j);
			j++;
		}
	}
	return (i + j);
}

int	have_newline(char *str)
{
	int	i;

	if (!str)
		return (0);
	i = 0;
	while (str[i])
	{
		if (str[i] == '\n')
			return (1);
		i++;
	}
	return (0);
}