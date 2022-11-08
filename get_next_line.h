/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   get_next_line.h                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: qbeukelm <qbeukelm@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/01 08:58:13 by qbeukelm      #+#    #+#                 */
/*   Updated: 2022/11/07 14:18:08 by qbeukelm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 8
# endif

// get_next_line
char	*get_next_line(int fd);
char	*ft_read_and_save(int fd, char *saved_line);
char	*ft_save(char *line_saved);
void	ft_str_dup(char *saved_line, char *str, int i);
char	*ft_process_line(char *line_saved);

// utils
char	*ft_strchr(char *s, int c);
size_t	ft_strlen(char *str);
char	*ft_strjoin(char *s1, char *s2);
int		ft_len(char *saved_line);

#endif
