/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfontene <yfontene@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 12:07:00 by yfontene          #+#    #+#             */
/*   Updated: 2023/05/05 12:07:00 by yfontene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Parameters: lst: The node to free.
**			   del: The address of the function used to delete the content.
** External functs: free
** Description: Takes as a parameter a node and frees the memory of the node’s
** content using the function ’del’ given as a parameter and free the node.
** The memory of ’next’ must not be freed.
->> void (*del)(void *) O ponteiro void * é genérico e pode apontar para qualquer
** tipo de dado. Por exemplo, se a lista contiver strings, a função del deve ser
** uma função que libera a memória alocada para a string, etc.*/

#include "libft.h"

/*int	ft_lstsize(t_list *lst)
{
	int	value;

	value = 0;
	while (lst)
	{
		lst = lst->next;
		value++;
	}
	return (value);
}*/

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (lst == NULL)
		return ;
	del(lst->content);
	free(lst);
}

/*void	del_content(void *content)
{
	free(content);
}

int main(void)
{
	t_list *lst;
	t_list *new;
	t_list *new2;


	lst = malloc(sizeof(t_list));
	new = malloc(sizeof(t_list));
	new2 = malloc(sizeof(t_list));
	
	lst->content = strdup("Hello");
	lst->next = new;
	new->content = strdup("World");
	new->next = new2;
	new2->content = "NULL";
	printf("o conteudo de lst eh: %s\n", lst->content);
	printf("o conteudo de new eh: %s\n", new->content);
	printf("o num de nos eh: %d\n", ft_lstsize(lst));
	printf("\n---------------------\n");

	ft_lstdelone(new, del_content);
	
	printf("o conteudo de lst eh: %s\n", lst->content);
	printf("o conteudo de new eh: %s\n", new->content);
	printf("o num de nos eh: %d\n", ft_lstsize(lst));
	return (0);
}*/
