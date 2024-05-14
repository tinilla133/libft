/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi_main.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvizcaya <fvizcaya@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 03:56:41 by fvizcaya          #+#    #+#             */
/*   Updated: 2024/03/30 04:06:50 by fvizcaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "../libft.h"

int	main(void)
{
	char	s[12];

	printf("Prueba de atoi()\n");
	printf("Introducir un entero: ");
	scanf("%s", s);
    printf("Salida atoi(\"%s\"): %d\n", s, ft_atoi(s));
    printf("Salida ft_atoi(\"%s\"): %d\n", s, atoi(s));
}
