/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memchr_main.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvizcaya <fvizcaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 20:27:40 by fvizcaya          #+#    #+#             */
/*   Updated: 2024/03/30 20:52:41 by fvizcaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include "../libft.h"

int	main(void)
{
	char	buff[] = "¡Hola mundo!";
	char	c;
	size_t	n;

	c = 'd';
	n = 11;
	printf("Prueba de memchr()\n");
	printf("El puntero que devuelve memchr(\"%s\", '%c', %zu): %s\n", buff, c, n, (char *) memchr(buff, c, n));
	printf("El puntero que devuelve ft_memchr(\"%s\", '%c', %zu): %s\n", buff, c, n, (char *) ft_memchr(buff, c, n));

}