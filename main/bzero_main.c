/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bzero_main.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvizcaya <fvizcaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 20:05:41 by fvizcaya          #+#    #+#             */
/*   Updated: 2024/03/30 20:10:58 by fvizcaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../libft.h"

int	main(void)
{
	char	buff[] = "Esto es una prueba.";
	printf("\n");
	printf("Antes de ft_bzero: %s\n", buff);
	ft_bzero(buff, 19);
	printf("Después de ft_bzero: %s\n", buff);
}