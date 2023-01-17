/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgabet <lgabet@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 11:00:33 by lgabet            #+#    #+#             */
/*   Updated: 2023/01/17 11:42:05 by lgabet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# include <stdio.h>

#ifndef BUFFER_SIZE
# define BUFFER_SIZE 10
# endif

char	*get_next_line(int fd);
char	*ft_fill_line(int fd, char *buff);
char	*ft_strjoin(char *s1, char *s2);
int		ft_strlen_buff(char *str);
int		have_newline(char *str);
void	ft_clear_buff(char *str);
int		ft_strlen(char *str);

# endif