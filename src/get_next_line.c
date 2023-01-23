/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaniely <kdaniely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 17:24:26 by kdaniely          #+#    #+#             */
/*   Updated: 2023/01/23 15:33:43 by kdaniely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*feed(int fd, char *line_feed, size_t *r_size)
{
	char	buf[BUFFER_SIZE + 1];
	char	*join;
	char	*tmp;

	*r_size = 1;
	buf[BUFFER_SIZE] = '\0';
	while (!ft_strchr(line_feed, '\n') && *r_size != 0)
	{
		*r_size = read(fd, buf, BUFFER_SIZE);
		if (*r_size < 0)
			return (NULL);
		tmp = ft_strdup(buf);
		if (!line_feed || !(*line_feed))
			join = tmp;
		else
			join = ft_strjoin(line_feed, tmp);
		if (line_feed)
		{
			free(line_feed);
			free(tmp);
		}
		line_feed = join;
	}
	return (line_feed);
}

char	*get_next_line(int fd)
{
	static char		*line_feed;
	char			*to_free;
	char			*str;
	size_t			len;
	size_t			r_size;

	line_feed = feed(fd, line_feed, &r_size);
	if (line_feed && (r_size == 0))
		return (line_feed);
	else if (!line_feed || r_size < 0)
		return (NULL);
	len = ft_strchr(line_feed, '\n') - line_feed;
	str = ft_substr(line_feed, 0, len + 1);
	to_free = line_feed;
	line_feed = ft_substr(line_feed, len + 1, (ft_strlen(line_feed) - len));
	free(to_free);
	return (str);
}
