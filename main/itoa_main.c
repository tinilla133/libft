/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itoa_main.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvizcaya <fvizcaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 18:44:48 by fvizcaya          #+#    #+#             */
/*   Updated: 2024/03/27 18:53:32 by fvizcaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../libft.h"

int	main(void)
{
	int	n_itoa;

	n_itoa = 0;
	printf("\nPrueba de ft_itoa():\n");
	printf("Introducir un entero y pulsar retorno de carro: ");
	scanf("%d", &n_itoa);
	printf("\nResultado: %s\n", ft_itoa(n_itoa));
}