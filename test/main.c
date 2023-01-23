/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaniely <kdaniely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 14:29:41 by kdaniely          #+#    #+#             */
/*   Updated: 2023/01/23 19:22:02 by kdaniely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

int main(void)
{
	int		fd;
	char *kek;

	fd = open("../files/empty", O_RDWR);
	lseek(fd, 0, SEEK_SET);
	kek = get_next_line(fd);
	free(kek);
	while(1)
		;
	return (0);
}
