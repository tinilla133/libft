/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strtrim_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvizcaya <fvizcaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 19:26:02 by fvizcaya          #+#    #+#             */
/*   Updated: 2024/03/28 18:18:05 by fvizcaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../libft.h"

int	main(void)
{
	char s[] = "";
	char set[] = "";

	printf("Trim %s , %s: %s\n", s, set, ft_strtrim("abcd", ""));
	printf("Trim %s , %s: %s\n", s, set, ft_strtrim(" . abcd", " "));
	printf("Trim %s , %s: %s\n", s, set, ft_strtrim("ab cd  f    ", " "));
	printf("Trim %s , %s: %s\n", s, set, ft_strtrim("xxxz  test with x and z and x .  zx  xx z", "z x"));
	printf("Trim %s , %s: %s\n", s, set, ft_strtrim("   abxfg  ", "x"));
	printf("Trim %s , %s: %s\n", s, set, ft_strtrim(".teste, bla ,.,.", ",."));
	
}