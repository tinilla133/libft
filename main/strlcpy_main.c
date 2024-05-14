/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcpy_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvizcaya <fvizcaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 23:13:39 by fvizcaya          #+#    #+#             */
/*   Updated: 2024/03/30 23:20:28 by fvizcaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "../libft.h"

int	main(void)
{
	char	buff1[100] = "Hola, caracola. ";
	char	buff2[] = "Manolo se ha pirado.";
	int		len = 100;

	printf("\n");
	printf("strlcpy() con %s y %s\n", buff1, buff2);
	printf("Devuelve %lu\n", strlcpy(buff1, buff2, len));
	printf("La cadena queda: %s\n", buff1);
	printf("ft_strlcpy() con %s y %s\n", buff1, buff2);
	printf("Devuelve %lu\n", ft_strlcpy(buff1, buff2, len));
	printf("La cadena queda: %s\n", buff1);
}