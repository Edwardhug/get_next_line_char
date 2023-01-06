/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgabet <lgabet@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 10:29:12 by lgabet            #+#    #+#             */
/*   Updated: 2023/01/06 13:51:01 by lgabet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

# ifndef BUFFER_SIZE
# define BUFFER_SIZE 4
# endif

char	*get_next_line(int fd);
char	*ft_fill_line(int fd, char *line);
int		have_newline(char *str);
int		ft_strlen(char *str);

# endif