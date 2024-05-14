/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcpy_main.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvizcaya <fvizcaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 21:24:36 by fvizcaya          #+#    #+#             */
/*   Updated: 2024/03/30 21:28:18 by fvizcaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "../libft.h"

int	main(void)
{
	char	dst_memcpy[] = "¡Hola mundo!";
	char	src_memcpy[] = "¡Adiós Edmundo!";

	printf("Prueba de ft_memcpy()\n");
	printf("*** Copiamos %s en %s ***\n", src_memcpy, dst_memcpy);
	printf("5 caracteres con memcpy() %s\n", memcpy(dst_memcpy, src_memcpy, 5));
	printf("5 caracteres con ft_memcpy() %s\n", ft_memcpy(dst_memcpy, src_memcpy, 5));
	printf("8 caracteres con memcpy() %s\n", memcpy(dst_memcpy, src_memcpy, 8));
	printf("8 caracteres con ft_memcpy() %s\n", ft_memcpy(dst_memcpy, src_memcpy, 8));
	printf("*** Copiamos %s en %s ***\n", NULL, NULL);
	printf("8 caracteres con memcpy() %s\n", memcpy(NULL, NULL, 8));
	printf("8 caracteres con ft_memcpy() %s\n", ft_memcpy(NULL, NULL, 8));
}