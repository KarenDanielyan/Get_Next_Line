/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaniely <kdaniely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 17:24:26 by kdaniely          #+#    #+#             */
/*   Updated: 2023/01/23 20:56:5 by kdaniely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*feed(int fd, char *line_feed)
{
	char	buf[BUFFER_SIZE + 1];
	char	*join;
	long	r_size;

	r_size = 1;
	while (!ft_strchr(line_feed, '\n') && r_size != 0)
	{
		r_size = read(fd, buf, BUFFER_SIZE);
		if (r_size < 0)
			return (NULL);
		buf[r_size] = '\0';
		if (!line_feed)
			join = ft_strdup(buf);
		else
			join = ft_strjoin (line_feed, buf);
		line_feed = join;
	}
	return (line_feed);
}

char	*get_next_line(int fd)
{
	static char		*line_feed[OPEN_MAX];
	char			*to_free;
	char			*str;
	size_t			len;

	if (fd < 3 && fd > OPEN_MAX)
		return (NULL);
	line_feed[fd] = feed(fd, line_feed[fd]);
	if (!line_feed[fd])
		return (NULL);
	len = ft_strchr(line_feed[fd], '\n') - line_feed[fd];
	str = ft_substr(line_feed[fd], 0, len + 1);
	to_free = line_feed[fd];
	line_feed[fd] = ft_substr(line_feed[fd], len + 1,
			(ft_strlen(line_feed[fd]) - len));
	free(to_free);
	return (str);
}
