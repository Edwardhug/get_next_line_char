/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgabet <lgabet@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 10:29:12 by lgabet            #+#    #+#             */
/*   Updated: 2023/01/06 16:09:48 by lgabet           ###   ########.fr       */
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
char	*ft_fill_line(int fd, char *buff);
char	*ft_strjoin(char *s1, char *s2, int size);
int		ft_lenline(char *str, char *buff);
int		have_newline(char *str);

# endif