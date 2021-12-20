/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: urycherd <urycherd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 18:08:14 by urycherd          #+#    #+#             */
/*   Updated: 2021/12/20 21:54:53 by urycherd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static void	buff_read(int fd, char *buffer, char **rem)
{
	char	*cpy;
	int		bytes;

	if (!*rem || !ft_strchr(*rem, '\n'))
	{
		bytes = read (fd, buffer, BUFFER_SIZE);
		buffer[bytes] = '\0';
		while (bytes > 0)
		{
			if (!*rem)
				*rem = ft_substr(buffer, 0, bytes);
			else
			{
				cpy = *rem;
				*rem = ft_strjoin(*rem, buffer);
				free (cpy);
			}
			if (ft_strchr(buffer, '\n'))
				break ;
			bytes = read (fd, buffer, BUFFER_SIZE);
			buffer[bytes] = '\0';
		}
	}
	free (buffer);
}

static char	*get_line(char **rem, char **line)
{
	int		start;
	int		end;
	char	*cpy;

	if (*rem == NULL)
		return (NULL);
	if (!ft_strchr(*rem, '\n'))
	{
		*line = ft_substr(*rem, 0, ft_strlen(*rem));
		free (*rem);
		*rem = 0;
		return (*line);
	}
	start = ft_strlen(ft_strchr(*rem, '\n'));
	end = ft_strlen(*rem);
	*line = ft_substr(*rem, 0, end - start + 1);
	cpy = *rem;
	*rem = ft_substr(ft_strchr(*rem, '\n'), 1, end);
	free (cpy);
	return (*line);
}

char	*get_next_line(int fd)
{
	static char	*rem;
	char		*buffer;
	char		*line;

	buffer = (char *)malloc(BUFFER_SIZE + 1);
	if (!buffer || BUFFER_SIZE < 1 || fd < 0)
	{
		free (buffer);
		return (0);
	}
	line = 0;
	buff_read(fd, buffer, &rem);
	return (get_line(&rem, &line));
}
