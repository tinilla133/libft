/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memmove_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvizcaya <fvizcaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 21:29:15 by fvizcaya          #+#    #+#             */
/*   Updated: 2024/03/30 22:04:47 by fvizcaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "../libft.h"

int	main(void)
{
	char	dst[] = "¡Hola mundo!";
	char	src[] = "¡Adiós Edmundo!";

	printf("\nCopiamos %s en %s\n", src, dst);
	printf("8 caracteres con memmove() solapamiento dst > src %s\n", memmove(dst + 3, src, 5));
	strcpy(src, "¡Adiós Edmundo!");
	strcpy(dst, "¡Hola mundo!");
	printf("8 caracteres con ft_memmove() solapamiento dst > src %s\n", ft_memmove(dst + 3, src, 5));
	strcpy(src, "¡Adiós Edmundo!");
	strcpy(dst, "¡Hola mundo!");
	printf("8 caracteres con memmove() solapamiento dst < src %s\n", memmove(dst, src + 3, 8));
	strcpy(src, "¡Adiós Edmundo!");
	strcpy(dst, "¡Hola mundo!");
	printf("8 caracteres con ft_memmove() solapamiento dst > src %s\n", ft_memmove(dst, src + 3, 8));
	printf("8 caracteres con memmove(NULL, NULL, 8) %s\n", memmove(NULL, NULL, 8));
	printf("8 caracteres con ft_memmove(NULL, NULL, 8) %s\n", ft_memmove(NULL, NULL, 8));
}