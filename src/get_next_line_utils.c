/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaniely <kdaniely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 20:15:49 by kdaniely          #+#    #+#             */
/*   Updated: 2023/01/22 22:57:47 by kdaniely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (*(s + len))
		len++;
	return (len);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size)
	{
		while (i < (size - 1) && *(src + i))
		{
			*(dst + i) = *(src + i);
			i ++;
		}
		*(dst + i) = '\0';
	}
	return (ft_strlen(src));
}

char	*ft_strdup(const char *s)
{
	char	*dup;
	int		i;

	i = 0;
	dup = malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!dup)
		return (NULL);
	while (*(s + i))
	{
		*(dup + i) = *(s + i);
		i ++;
	}
	*(dup + i) = '\0';
	return (dup);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*str;
	size_t		range;
	size_t		i;

	if (!s)
		return (NULL);
	i = ft_strlen(s);
	range = 0;
	if (start < i)
		range = i - start;
	if (range > len)
		range = len;
	str = (char *)malloc((range + 1) * sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	while (i < range)
	{
		*(str + i) = *(s + start + i);
		i++;
	}
	*(str + i) = '\0';
	return (str);
}

char	*ft_strchr(const char *str, int c)
{
	char	*buf;

	if (!str)
		return (NULL);
	buf = (char *)str;
	while (*buf)
	{
		if (*buf == (unsigned char)(c & 0xFF))
			return (buf);
		buf++;
	}
	if (*buf == c)
		return (buf);
	else
		return (NULL);
}
