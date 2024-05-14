/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrchr_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvizcaya <fvizcaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 19:41:40 by fvizcaya          #+#    #+#             */
/*   Updated: 2024/03/27 19:45:05 by fvizcaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "../libft.h"

int	main(void)
{
	char s[] = "Hola mundo: ¿has visto a Manolo?";

	printf("Salida strrchr(\"%s\", %c): %s\n", s, 'h', strrchr(s, (int) 'h'));
	printf("Salida ft_strrchr(\"%s\", %c): %s\n", s, 'h', ft_strrchr(s, (int) 'h'));
	printf("Salida strrchr(\"%s\", %c): %s\n", s, 'o', strrchr(s, (int) 'o'));
	printf("Salida ft_strrchr(\"%s\", %c): %s\n", s, 'o', ft_strrchr(s, (int) 'o'));
	printf("Salida strrchr(\"%s\", %c): %s\n", s, '\0', strrchr(s, (int) '\0'));
	printf("Salida ft_strrchr(\"%s\", %c): %s\n", s, '\0', ft_strrchr(s, (int) '\0'));
	printf("Salida strrchr(\"%s\", %c): %s\n", s, 'p', strrchr(s, (int) 'p'));
	printf("Salida ft_strrchr(\"%s\", %c): %s\n", s, 'p', ft_strrchr(s, (int) 'p'));

}