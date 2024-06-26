/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pruebas.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvizcaya <fvizcaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 11:25:09 by fvizcaya          #+#    #+#             */
/*   Updated: 2024/03/26 12:32:18 by fvizcaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"

int	main(int argc, char **argv)
{

	/* ft_isascii() */

	ft_isascii('k');

	/* ft_atoi() */

	if(argc > 1)
	{
		printf("Salida atoi(\"%s\"): %d\n", argv[1], atoi(argv[1]));
		printf("Salida ft_atoi(\"%s\"): %d\n", argv[1], ft_atoi(argv[1]));
	}

	/* ft_bzero() */
	
	char	buff_bzero[] = "Esto es una prueba.";
	printf("\n");
	printf("Antes de ft_bzero: %s\n", buff_bzero);
	ft_bzero(buff_bzero, 19);
	printf("Después de ft_bzero: %s\n", buff_bzero);

	/* ft_calloc() */
	
	int 	*buff_calloc;
	
	buff_calloc = calloc (4, sizeof(int));
	buff_calloc[0] = 23;
	buff_calloc[1] = -6;
	buff_calloc[2] = 23564;
	buff_calloc[3] = -5548;
	printf("\n");
	printf("Array de enteros con memoria reservada con ft_calloc(): ");
	for (int i = 0; i < 4; i++)
		printf(" %d ", buff_calloc[i]);
	printf("\n");

	/* ft_itoa() */

		int	n_itoa;
	
	n_itoa = 0;
	printf("\nPrueba de ft_itoa():n");
	printf("Introducir un entero y pulsar retorno de carro:\n");
	scanf("%d", &n_itoa);
	printf("\nResultado: %s\n", ft_itoa(n_itoa));

	/* ft_memchr() */

	char	buff_memchr[] = "¡Hola mundo!";
	
	printf("\n");
	printf("El puntero que devuelve memchr(\"%s\", 'm', 8): %s\n", buff_memchr, memchr(buff_memchr, 'm', 8));
	printf("El puntero que devuelve ft_memchr(\"%s\", 'm', 8): %s\n", buff_memchr, ft_memchr(buff_memchr, 'm', 8));

	/* ft_memcmp() */

	char	buff1_memcmp[] = "¡Hola mundo!";
	char	buff2_memcmp[] = "¡Hola Edmundo!";

	printf("\nComparamos %s y %s\n", buff1_memcmp, buff2_memcmp);
	printf("5 caracteres con memcmp() %d\n", memcmp(buff1_memcmp, buff2_memcmp, 5));
	printf("5 caracteres con ft_memcmp() %d\n", ft_memcmp(buff1_memcmp, buff2_memcmp, 5));
	printf("8 caracteres con memcmp() %d\n", memcmp(buff1_memcmp, buff2_memcmp, 8));
	printf("8 caracteres con ft_memcmp() %d\n", ft_memcmp(buff1_memcmp, buff2_memcmp, 8));

	/* ft_memcpy() */
	
	char	dst_memcpy[] = "¡Hola mundo!";
	char	src_memcpy[] = "¡Adiós Edmundo!";

	printf("\nCopiamos %s en %s\n", src_memcpy, dst_memcpy);
	printf("5 caracteres con memcpy() %s\n", memcpy(dst_memcpy, src_memcpy, 5));
	printf("5 caracteres con ft_memcpy() %s\n", ft_memcpy(dst_memcpy, src_memcpy, 5));
	printf("8 caracteres con memcpy() %s\n", memcpy(dst_memcpy, src_memcpy, 8));
	printf("8 caracteres con ft_memcpy() %s\n", ft_memcpy(dst_memcpy, src_memcpy, 8));
	printf("8 caracteres con memcpy() %s\n", memcpy(NULL, NULL, 8));
	printf("8 caracteres con ft_memcpy() %s\n", ft_memcpy(NULL, NULL, 8));
	
		/* ft_memmove() */
	
	char	dst_memmove[] = "¡Hola mundo!";
	char	src_memmove[] = "¡Adiós Edmundo!";

	printf("\nCopiamos %s en %s\n", src_memmove, dst_memmove);
	printf("5 caracteres con memmove() %s\n", memmove(dst_memmove, src_memmove, 5));
	strcpy(src_memmove, "¡Adiós Edmundo!");
	strcpy(dst_memmove, "¡Hola mundo!");
	printf("5 caracteres con ft_memmove() %s\n", ft_memmove(dst_memmove, src_memmove, 5));
	strcpy(src_memmove, "¡Adiós Edmundo!");
	strcpy(dst_memmove, "¡Hola mundo!");
	printf("8 caracteres con memmove() %s\n", memmove(dst_memmove, src_memmove, 8));
	strcpy(src_memmove, "¡Adiós Edmundo!");
	strcpy(dst_memmove, "¡Hola mundo!");
	printf("8 caracteres con ft_memmove() %s\n", ft_memmove(dst_memmove, src_memmove, 8));
	printf("8 caracteres con memmove() %s\n", memmove(NULL, NULL, 8));
	printf("8 caracteres con ft_memmove() %s\n", ft_memmove(NULL, NULL, 8));

	/* ft_memset() */
	
	char	buff_memset[] = "¡Hola Segismundo!";
	int		c;

	c = 78;
	printf("\n");
	printf("Llenamos %d caracteres de la cadena %s de %c\n", 10, buff_memset, (char) c);
	printf("Con memset(): %s\n", memset(buff_memset, c, 10));
	strcpy(buff_memset, "¡Hola Segismundo!");
	printf("Con ft_memset(): %s\n", ft_memset(buff_memset, c, 10));

	/* ft_strdup() */

	char	buff_strdup[] = "¡Jo, jo, jo! ¡Vaya fiesta!";
	printf("\n");
	printf("strdup(\"%s\"): %s\n", buff_strdup, strdup(buff_strdup));
	printf("ft_strdup(\"%s\"): %s\n", buff_strdup, ft_strdup(buff_strdup));

	/* ft_strchr() */
	
	if(argc > 2)
	{
		printf("Salida strchr(\"%s\", %c): %s\n", argv[1], argv[2][0], strchr(argv[1], (int) argv[2][0]));
		printf("Salida ft_strchr(\"%s\", %c): %s\n", argv[1], argv[2][0], ft_strchr(argv[1], (int) argv[2][0]));
	}

		/* ft_strrchr() */
	
	if(argc > 2)
	{
		printf("Salida strrchr(\"%s\", %c): %s\n", argv[1], argv[2][0], strrchr(argv[1], (int) argv[2][0]));
		printf("Salida ft_strrchr(\"%s\", %c): %s\n", argv[1], argv[2][0], ft_strrchr(argv[1], (int) argv[2][0]));
	}

	/* ft_strnstr() */

	char	buff_strnstr[] = "¡No le mana, canalla infame! No le mana eso que decís.";
	
	printf("\n");
	printf("strnstr() sobre la cadena %s (poner la subcadena a buscar en argv[1]): %s\n", buff_strnstr, strnstr(buff_strnstr, "le mana", 54));
	printf("ft_strnstr() sobre la cadena %s (poner la subcadena a buscar en argv[1]): %s\n", buff_strnstr, ft_strnstr(buff_strnstr, "le mana", 54));
	printf("strnstr() sobre la cadena %s (poner la subcadena a buscar en argv[1]): %s\n", "Hola Manolita", strnstr("Hola Manolita", "Hola Manolita", 13));
	printf("ft_strnstr() sobre la cadena %s (poner la subcadena a buscar en argv[1]): %s\n", "Hola Manolita", ft_strnstr("Hola Manolita", "Hola Manolita", 13));


	/* ft_strlcat() */
	
	char	buff1_strlcat[100] = "Hola, caracola. ";
	char	buff2_strlcat[] = "Manolo se ha pirado. ";

	printf("\n");
	printf("strlcat() con %s y %s: ", buff1_strlcat, buff2_strlcat);
	strlcat(buff1_strlcat, buff2_strlcat, 25);
	printf("%s\n", buff1_strlcat);
	printf("ft_strlcat() con %s y %s: ", buff1_strlcat, buff2_strlcat);
	ft_strlcat(buff1_strlcat, buff2_strlcat, 25);
	printf("%s\n", buff1_strlcat);

	/* ft_strlcpy() */

	char	buff1_strlcpy[100] = "Hola, caracola. ";
	char	buff2_strlcpy[] = "Manolo se ha pirado.";

	printf("\n");
	printf("strlcpy() con %s y %s: ", buff1_strlcpy, buff2_strlcpy);
	strlcpy(buff1_strlcpy, buff2_strlcpy, 25);
	printf("%s\n", buff1_strlcpy);
	printf("ft_strlcpy() con %s y %s: ", buff1_strlcpy, buff2_strlcpy);
	ft_strlcpy(buff1_strlcpy, buff2_strlcpy, 25);
	printf("%s\n", buff1_strlcpy);

	/*  ft_itoa() */
	
	printf("\n");
	printf("ft_itoa(): %s\n", ft_itoa(-2147));
	ft_putstr_fd((void *)0, 1);

	/* ft_putnbr_fd()*/

	int	nbr_putnbr;
	
	nbr_putnbr = 0;

	printf("\nPrueba de ft_putnbr_fd()\n:");
	printf("Introduzca un número entero y pulse retorno de carro...\n");
	scanf("%d", nbr_putnbr);
	printf("El resultrado es: ");
	ft_putnbr_fd(nbr_putnbr, 1);
	write(1, "\n", 1);

}
