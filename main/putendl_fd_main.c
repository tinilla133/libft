/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putendl_fd_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvizcaya <fvizcaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 23:23:29 by fvizcaya          #+#    #+#             */
/*   Updated: 2024/03/30 23:49:13 by fvizcaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../libft.h"

int	main(void)
{
	int		fd;
	char	s[] = "Hola, Manolo: ¿cómo estás?";

	fd = 1;
	printf("\nPrueba de ft_putendl_fd(%s, %d)\n", s, fd);
	ft_putendl_fd(s, 1);
	write(1, "\n", 1);
}