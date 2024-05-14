/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split_main.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvizcaya <fvizcaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 19:46:10 by fvizcaya          #+#    #+#             */
/*   Updated: 2024/04/04 18:39:57 by fvizcaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../libft.h"

int	main(void)
{
	// char buff[] = "lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse lectus tortor, dignissim sit amet, adipiscing nec, ultricies sed, dolor. Cras elementum ultricies diam. Maecenas ligula massa, varius a, semper congue, euismod non, mi.";
	// char buff[] = "split  ||this|for|me|||||!|";
 	char buff[] = "";	
	char c = '|';
	char **result;

	printf("Prueba de split sobre %s con separador %c\n", buff, c);
	result = ft_split(buff, c);
	printf("%s\n", *result);
	while (*result)
		printf("%s\n", *result++);
}
