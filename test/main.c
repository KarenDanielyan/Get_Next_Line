/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaniely <kdaniely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 14:29:41 by kdaniely          #+#    #+#             */
/*   Updated: 2023/01/22 21:47:21 by kdaniely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

int main(void)
{
	int		count;
	int		fd;

	fd = open("../tessaract", O_RDONLY, 0);
	lseek(fd, 0, SEEK_SET);
	count = 5;
	while (count--)
		printf("Line %d: %s\n", (5 - count), get_next_line(fd));
	return (0);
}
