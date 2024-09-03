/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfontene <yfontene@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 12:53:14 by yfontene          #+#    #+#             */
/*   Updated: 2023/05/05 12:53:14 by yfontene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Parameters: lst: The address of a pointer to a node.
**			   f: The address of the function used to iterate on the list.
** Description: Iterates the list ’lst’ and applies the function ’f’ on the
** content of each node.*/

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}

/*void	print_content(void *content)
{
	printf("%s\n", (char *)content);
}

int main(void)
{
	t_list *lst;
	t_list *new;
	t_list *new2;

	lst = ft_lstnew("first");
	new = ft_lstnew("second");
	new2 = ft_lstnew("third");
	ft_lstadd_back(&lst, new);
	ft_lstadd_back(&lst, new2);
	ft_lstiter(lst, print_content);
	return (0);
}*/
