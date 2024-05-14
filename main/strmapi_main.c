/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strmapi_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvizcaya <fvizcaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 14:40:20 by fvizcaya          #+#    #+#             */
/*   Updated: 2024/04/01 18:21:19 by fvizcaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../libft.h"

char	ft_even_toupper(unsigned int i, char c)
{
	if (i % 2)
		c = ft_toupper((int) c);
	return(c);
}

int	main(void)
{
	char	s[] = "Hola mundo, qué tal está Manolo";
	char	*buff;
	int 	i;

	i = 0;
	buff = ft_strmapi(s, ft_even_toupper);
	printf("La cadena: %s\n", buff);
}