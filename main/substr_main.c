/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   substr_main.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvizcaya <fvizcaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 22:35:25 by fvizcaya          #+#    #+#             */
/*   Updated: 2024/03/30 22:39:35 by fvizcaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../libft.h"

int	main(void)
{
	char buff[] = "Hola radiola tócame la cola";
	int init = 6;
	int len = 10;
	
	printf("Prueba de ft_substr()\n");
	printf("Cadena inicial %s", buff);
	printf("Subcadena %s inicio: %d longitud: %d \n", ft_substr("Hola radiola tócame la cola", init, len), init, len);
}