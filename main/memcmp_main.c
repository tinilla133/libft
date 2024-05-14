/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcmp_main.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvizcaya <fvizcaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 21:17:31 by fvizcaya          #+#    #+#             */
/*   Updated: 2024/03/30 21:19:40 by fvizcaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "../libft.h"

int	main(void)
{
	char	buff1[] = "¡Hola mundo!";
	char	buff2[] = "¡Hola Edmundo!";

	printf("\nComparamos %s y %s\n", buff1, buff2);
	printf("5 caracteres con memcmp() %d\n", memcmp(buff1, buff2, 5));
	printf("5 caracteres con ft_memcmp() %d\n", ft_memcmp(buff1, buff2, 5));
	printf("8 caracteres con memcmp() %d\n", memcmp(buff1, buff2, 8));
	printf("8 caracteres con ft_memcmp() %d\n", ft_memcmp(buff1, buff2, 8));
}