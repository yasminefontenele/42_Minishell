/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfontene <yfontene@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 13:08:27 by yfontene          #+#    #+#             */
/*   Updated: 2023/05/05 13:08:27 by yfontene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Parameters: lst: The address of a pointer to a node.
** 				 f: The address of the function used to iterate on the list.
**			   del: The address of the function used to delete the content of
**  				a node if needed.
** Return value: The new list. NULL if the allocation fails.
** External functs: malloc, free
** Description: Iterates the list ’lst’ and applies the function ’f’ on the
** content of each node. Creates a new list resulting of the successive
** applications of the function ’f’. The ’del’ function is used to delete the
** content of a node if needed.*/

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*new_node;

	if (!lst)
		return (NULL);
	new_lst = NULL;
	while (lst)
	{
		new_node = ft_lstnew(f(lst->content));
		if (!new_node)
		{
			ft_lstclear(&new_lst, del);
			return (NULL);
		}
		ft_lstadd_back(&new_lst, new_node);
		lst = lst->next;
	}
	return (new_lst);
}

/*int main(void)
{
	t_list *lst;
	t_list *new_lst;
	t_list *new_node;

	lst = ft_lstnew("1");
	new_node = ft_lstnew("2");
	ft_lstadd_back(&lst, new_node);
	new_node = ft_lstnew("3");
	ft_lstadd_back(&lst, new_node);
	new_lst = ft_lstmap(lst, &ft_strlen, &ft_lstclear);
	printf("%s\n", new_lst->content);
	printf("%s\n", new_lst->next->content);
	printf("%s\n", new_lst->next->next->content);
	return (0);
}*/