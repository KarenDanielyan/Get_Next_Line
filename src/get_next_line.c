/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaniely <kdaniely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 17:24:26 by kdaniely          #+#    #+#             */
/*   Updated: 2023/01/28 16:25:01 by kdaniely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char	*feed(int fd, char *line_feed)
{
	char	buf[BUFFER_SIZE + 1];
	char	*join;
	long	r_size;

	r_size = 1;
	while (1)
	{
		r_size = read(fd, buf, BUFFER_SIZE);
		if (r_size < 0)
		{
			if (line_feed)
				free(line_feed);
			return (NULL);
		}
		buf[r_size] = '\0';
		if (!line_feed)
			join = ft_strdup(buf);
		else
			join = ft_strjoin (line_feed, buf);
		line_feed = join;
		if (ft_strchr(line_feed, '\n') || r_size == 0)
			break ;
	}
	return (line_feed);
}

char	*get_next_line(int fd)
{
	static char		*line_feed;
	char			*to_free;
	char			*str;
	size_t			len;

	if ((fd < 0 || fd > OPEN_MAX) || BUFFER_SIZE == 0)
	{
		if (line_feed)
			free(line_feed);
		return (NULL);
	}
	line_feed = feed(fd, line_feed);
	if (!line_feed)
		return (NULL);
	len = ft_strchr(line_feed, '\n') - line_feed;
	str = ft_substr(line_feed, 0, len + 1);
	to_free = line_feed;
	line_feed = ft_substr(line_feed, len + 1, (ft_strlen(line_feed) - len));
	free(to_free);
	return (str);
}
