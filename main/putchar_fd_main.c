/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putchar_fd_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvizcaya <fvizcaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 23:23:29 by fvizcaya          #+#    #+#             */
/*   Updated: 2024/03/30 23:36:06 by fvizcaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../libft.h"

int	main(void)
{
	int		fd;
	char	c;
	
	c = 0;
	fd = 1;
	printf("\nPrueba de ft_putnbr_fd()\n:");
	printf("Introduzca un carácter y pulse retorno de carro...\n");
	scanf("%c", &c);
	while (getchar() != '\n') ;
	ft_putchar_fd(c, 1);
	write(1, "\n", 1);
}