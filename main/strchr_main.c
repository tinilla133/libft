/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strchr_main.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvizcaya <fvizcaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 19:35:37 by fvizcaya          #+#    #+#             */
/*   Updated: 2024/03/27 19:45:21 by fvizcaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "../libft.h"

int	main(void)
{
	char s[] = "Hola mundo: ¿has visto a Manolo?";

	printf("Salida strchr(\"%s\", %c): %s\n", s, 'h', strchr(s, (int) 'h'));
	printf("Salida ft_strchr(\"%s\", %c): %s\n", s, 'h', ft_strchr(s, (int) 'h'));
	printf("Salida strchr(\"%s\", %c): %s\n", s, '\0', strchr(s, (int) '\0'));
	printf("Salida ft_strchr(\"%s\", %c): %s\n", s, '\0', ft_strchr(s, (int) '\0'));
	printf("Salida strchr(\"%s\", %c): %s\n", s, 'p', strchr(s, (int) 'p'));
	printf("Salida ft_strchr(\"%s\", %c): %s\n", s, 'p', ft_strchr(s, (int) 'p'));

}