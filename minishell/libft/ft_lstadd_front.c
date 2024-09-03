/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfontene <yfontene@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 18:28:54 by yfontene          #+#    #+#             */
/*   Updated: 2023/05/08 15:41:54 by yfontene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Parameters:lst: The address of a pointer to the first link of a list.
**			  new: The address of a pointer to the node to be added to the list.
** Description: Adds the node ’new’ at the beginning of the list. */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}

/*int main(void)
{
	t_list **lista_de_listas;
	
	int number1 = 1;
	t_list *struc = ft_lstnew(&number1);
	lista_de_listas = &struc;

	int number2 = 2;
	t_list *struc2 = ft_lstnew(&number2);
	
	ft_lstadd_front(lista_de_listas, struc2);

	int number3 = 3;
	t_list *struc3 = ft_lstnew(&number3);
	
	ft_lstadd_front(lista_de_listas, struc3);

	int number4 = 4;
	t_list *struc4 = ft_lstnew(&number4);
	
	ft_lstadd_front(lista_de_listas, struc4);
	
	printf("Primeiro elemento da lista de listas: %i\n",
	*(int*)(*lista_de_listas)->content);
	printf("Segundo elemento da lista de listas: %i\n",
	*(int*)(*lista_de_listas)->next->content);
	printf("Terceiro elemento da lista de listas: %i\n",
	*(int*)(*lista_de_listas)->next->next->content);
	printf("Quarto elemento da lista de listas: %i\n",
	*(int*)(*lista_de_listas)->next->next->next->content);
}*/