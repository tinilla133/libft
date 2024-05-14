/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvizcaya <fvizcaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 23:05:13 by fvizcaya          #+#    #+#             */
/*   Updated: 2024/04/04 13:19:42 by fvizcaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "../libft.h"

int main(void)
{
	char	*buff1 = "Hola";
	//char 	*buff1 = ft_strdup(buffinit);
	const char	*buff2 = " world";
	size_t 	len = 5;

	// printf("Prueba de ft_strlcat()\n");
	// printf("strlcat() con %s y %s: ", buff1, buff2);
	// printf("%s\n", buff1);
	// printf("ft_strlcat() con %s y %s: ", buff1, buff2);
	printf("%zu\n", strlcat(buff1, buff2, len));
	printf("%zu", ft_strlcat(buff1, buff2, len));
	// printf("%s\n", buff1);
}