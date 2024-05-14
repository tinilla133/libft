/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putnbr_fd_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvizcaya <fvizcaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 23:23:29 by fvizcaya          #+#    #+#             */
/*   Updated: 2024/03/30 23:35:51 by fvizcaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../libft.h"

int	main(void)
{
	int	nbr;
	int fd;
	
	nbr = 0;
	fd = 1;
	printf("\nPrueba de ft_putnbr_fd()\n:");
	printf("Introduzca un número entero y pulse retorno de carro...\n");
	scanf("%d", &nbr);
	while (getchar() != '\n') ;
	ft_putnbr_fd(nbr, 1);
	write(1, "\n", 1);
}