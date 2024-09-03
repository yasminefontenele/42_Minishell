/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfontene <yfontene@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 11:27:35 by yfontene          #+#    #+#             */
/*   Updated: 2023/05/05 11:27:35 by yfontene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Parameters: lst: The beginning of the list.
Return: value Last node of the list
Description: Returns the last node of the list.*/

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*value;

	value = lst;
	if (!lst)
		return (NULL);
	while (value->next != NULL)
		value = value->next;
	return (value);
}

/*int main(void)
{
	t_list *lst;
	t_list *new;
	t_list *new2;
	t_list *new3;

	lst = malloc(sizeof(t_list));
	new = malloc(sizeof(t_list));
	new2 = malloc(sizeof(t_list));
	new3 = malloc(sizeof(t_list));
	lst->content = "Hello";
	lst->next = new;
	new->content = "World";
	new->next = new2;
	new2->content = "42";
	new2->next = new3;
	new3->content = "Porto";
	new3->next = NULL;
	printf("%s\n", ft_lstlast(lst)->content);
	return (0);
}*/