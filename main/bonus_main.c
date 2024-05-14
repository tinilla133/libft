/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bonus_main.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvizcaya <fvizcaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 00:03:51 by fvizcaya          #+#    #+#             */
/*   Updated: 2024/04/04 13:02:02 by fvizcaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../libft.h"

void	print_list(void *lst)
{
	t_list	*ptrlst;

	ptrlst = (t_list *) lst;
	while (ptrlst != NULL)
	{
		printf("%s", (char *) ptrlst->content);
		ptrlst = ptrlst->next;
		printf(" --> ");
	}
	printf("%s\n", (char *) ptrlst);
}

void	print_content(void *content)
{
	printf("%s", (char *) content);
	printf(" --> ");
}

void	*map_content(void *content)
{
	char	*str;
	char	*mapped;
	int		i;

	i = 0;
	str = (char *) content;
	mapped = ft_strdup(str);
	if (mapped == NULL)
		return (NULL);
	while (*(mapped + i))
	{
		*(mapped + i)= ft_toupper((int) *(mapped + i));
		i++;
	}
	return (mapped);
}

void	delete_content(void *content)
{
	free(content);
}

int	main(void)
{
	t_list	*newlist;
	t_list	*mapped_list;

	newlist = NULL;
	ft_lstadd_back(&newlist, ft_lstnew("Manolo "));
	ft_lstadd_front(&newlist, ft_lstnew("Hola , "));
	ft_lstadd_back(&newlist, ft_lstnew("¿Cómo "));
	ft_lstadd_back(&newlist, ft_lstnew("estás?"));
	printf("La longitud de la lista es: %d\n", ft_lstsize(newlist));
	// ft_lstdelone(newlist->next, delete_content);
	printf("Imprimir la lista con ft_lstiter(): ");
	ft_lstiter(newlist, print_content);
	printf("%s", (char *) NULL);
	printf("\n");
	printf("Imprimimos el último con ft_lstlast(): ");
	printf("%s\n", (char *) ft_lstlast(newlist)->content);
	mapped_list = ft_lstmap(newlist, map_content, delete_content);
	printf("Imprimimos la lista despues de ft_lstmap(): ");
	print_list(mapped_list);
	printf("Borramos la lista con ft_lstclear()\n");
}