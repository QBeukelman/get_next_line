/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   get_next_line_utils.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: qbeukelm <qbeukelm@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/01 08:57:53 by qbeukelm      #+#    #+#                 */
/*   Updated: 2022/11/08 09:27:48 by qbeukelm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strchr(char *s, int c)
{
	if (!(s))
		return (NULL);
	while ((*s != '\0') && (*s != c))
		s++;
	if (*s == c)
		return ((char *)s);
	return ((char *) NULL);
}

size_t	ft_strlen(char *str)
{
	size_t	i;

	if (!(str))
		return (0);
	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strjoin(char *s1, char *s2)
{
	int		i;
	int		j;
	int		len1;
	int		len2;
	char	*str;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	str = (char *)malloc(sizeof(char) * (len1 + len2 + 1));
	if (str == NULL)
		return (NULL);
	i = -1;
	while (++i < len1)
		str[i] = s1[i];
	j = -1;
	while (++j < len2)
	{
		str[i++] = s2[j];
	}
	str[i] = '\0';
	if (s1)
		free(s1);
	return (str);
}

int	ft_len(char *saved_line)
{
	int	len;

	len = ft_strlen(saved_line);
	saved_line[len] = 0;
	return (len);
}
