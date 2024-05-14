/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strdup_main.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvizcaya <fvizcaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 22:24:44 by fvizcaya          #+#    #+#             */
/*   Updated: 2024/03/30 23:03:20 by fvizcaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "../libft.h"

int	main(void)
{
	char	buff[] = "¡Jo, jo, jo! ¡Vaya fiesta!";
	printf("Prueba de strdup()\n");
	printf("strdup(\"%s\"): %s\n", buff, strdup(buff));
	printf("ft_strdup(\"%s\"): %s\n", buff, ft_strdup(buff));
}