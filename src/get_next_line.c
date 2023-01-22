/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaniely <kdaniely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 17:24:26 by kdaniely          #+#    #+#             */
/*   Updated: 2023/01/22 22:57:30 by kdaniely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static char		*line_feed;
	char			buf[BUFSIZ];
	char			*to_free;
	char			*str;
	size_t			len;

	if (!ft_strchr(line_feed, '\n'))
	{	
		if (read(fd, buf, BUFSIZ) == -1)
			return (NULL);
		line_feed = ft_strdup(buf);
	}
	len = (int)(ft_strchr(line_feed, '\n') - line_feed);
	str = ft_substr(line_feed, 0, len);
	to_free = line_feed;
	line_feed = ft_substr(line_feed, len + 1, BUFSIZ - len - 1);
	free(to_free);
	return (str);
}
