/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calloc_main.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvizcaya <fvizcaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 20:13:43 by fvizcaya          #+#    #+#             */
/*   Updated: 2024/03/30 20:19:03 by fvizcaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../libft.h"

int	main(void)
{
	int	*buff;
	int	i;

	i = 0;
	buff = calloc (4, sizeof(int));
	buff[0] = 23;
	buff[1] = -6;
	buff[2] = 23564;
	buff[3] = -5548;
	printf("\n");
	printf("Array de enteros con memoria reservada con ft_calloc(): ");
	while (i < 4)
	{
		printf(" %d ", buff[i]);
		i++;
	}
	printf("\n");
}
