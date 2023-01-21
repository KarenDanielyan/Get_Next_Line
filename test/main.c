/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaniely <kdaniely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 14:29:41 by kdaniely          #+#    #+#             */
/*   Updated: 2023/01/21 16:50:50 by kdaniely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

int main(void)
{
	char	buf[BUFSIZ];
	int		n;

	ft_getchar(0);
	while ((n = read(STDIN_FILENO, buf, BUFSIZ)))
		write(STDOUT_FILENO, buf, n);
	return (0);
}
