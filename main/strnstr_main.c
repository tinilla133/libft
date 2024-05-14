/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strnstr_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvizcaya <fvizcaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 22:30:09 by fvizcaya          #+#    #+#             */
/*   Updated: 2024/03/30 22:33:04 by fvizcaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "../libft.h"

int	main(void)
{
	char	buff[] = "¡No le mana, canalla infame! No le mana eso que decís.";
	
	printf("\n");
	printf("strnstr() sobre la cadena %s: %s\n", buff, strnstr(buff, "le mana", 54));
	printf("ft_strnstr() sobre la cadena %s: %s\n", buff, ft_strnstr(buff, "le mana", 54));
	printf("strnstr() sobre la cadena %s: %s\n", "Hola Manolita", strnstr("Hola Manolita", "Hola Manolita", 13));
	printf("ft_strnstr() sobre la cadena %s: %s\n", "Hola Manolita", ft_strnstr("Hola Manolita", "Hola Manolita", 13));
}