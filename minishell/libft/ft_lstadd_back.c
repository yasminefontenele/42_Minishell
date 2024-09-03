/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfontene <yfontene@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 11:45:49 by yfontene          #+#    #+#             */
/*   Updated: 2023/05/05 11:45:49 by yfontene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Parameters: lst:The address of a pointer to the first link of a list.
**		       new:The address of a pointer to the node to be added to the list.
** Description: Adds the node ’new’ at the end of the list.*/

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!*lst)
	{
		*lst = new;
		return ;
	}
	else
	{
		last = ft_lstlast(*lst);
		last->next = new;
	}
}

/*int main(void)
{
	t_list *lst;
	t_list *new;

	lst = ft_lstnew("first");
	new = ft_lstnew("second");
	ft_lstadd_back(&lst, new);
	printf("%s\n", lst->content);
	printf("%s\n", lst->next->content);
	return (0);
}*/