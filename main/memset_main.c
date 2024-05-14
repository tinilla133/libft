/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset_main.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvizcaya <fvizcaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 22:21:50 by fvizcaya          #+#    #+#             */
/*   Updated: 2024/03/30 22:24:05 by fvizcaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "../libft.h"

int	main(void)
{
	char	buff[] = "¡Hola Segismundo!";
	int		c;

	c = 78;
	printf("\n");
	printf("Llenamos %d caracteres de la cadena %s de %c\n", 10, buff, (char) c);
	printf("Con memset(): %s\n", memset(buff, c, 10));
	strcpy(buff, "¡Hola Segismundo!");
	printf("Con ft_memset(): %s\n", ft_memset(buff, c, 10));
}