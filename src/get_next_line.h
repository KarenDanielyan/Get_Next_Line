/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaniely <kdaniely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 17:25:53 by kdaniely          #+#    #+#             */
/*   Updated: 2023/01/26 14:05:33 by kdaniely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <limits.h>
# include <unistd.h>
# include <stdlib.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# ifndef OPEN_MAX
#  define OPEN_MAX 0xFFFF
# endif

size_t	ft_strlen(const char *s);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strchr(const char *str, int c);
char	*ft_strdup(const char *s);
char	*ft_strjoin(char *s1, char *s2);

/*
*	Reference: DNE
*
*	Description: Returns a line read from file pointed by
*	file descriptor. If fd is invalid, function returns
*	NULL;
*	NOTE: In order to not have leaks, run get_next_line() function
*	with -1 parameter in order to free the static allocated space
*	before ending program execution.
*
*	Return Value: C-standard string, or NULL on invalid fd.
*/
char	*get_next_line(int fd);

#endif
