/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfontene <yfontene@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 12:38:17 by yfontene          #+#    #+#             */
/*   Updated: 2023/05/05 12:38:17 by yfontene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Parameters lst:The address of a pointer to a node.
**			  del:The address of the function used to del the content of the node.
** External functs: free
** Description: Deletes and frees the given node and every successor of that
** node, using the function ’del’ and free(3). Finally, the pointer to the
** list must be set to NULL.*/

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

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp;

	if (!*lst)
		return ;
	while (*lst)
	{
		tmp = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = tmp;
	}
	*lst = NULL;
}

/*void	del_content(void *content)
{
	free (content);
}

int main(void)
{
	t_list *lst;
	t_list *new;
	t_list *new2;

	lst = malloc(sizeof(t_list));
	new = malloc(sizeof(t_list));
	new2 = malloc(sizeof(t_list));
	lst->content = "Hello";
	lst->next = new;
	new->content = "World";
	new->next = new2;
	new2->content = "NULL";

	printf("o conteudo de lst eh: %s\n", lst->content);
	printf("o conteudo de new eh: %s\n", new->content);
	printf("o num de nos eh: %d\n", ft_lstsize(lst));

	ft_lstclear(&lst, del_content);

	printf("\n---------------------\n");
	printf("o conteudo de lst eh: %s\n", lst->content);
	printf("o conteudo de new eh: %s\n", new->content);
	return (0);
}*/