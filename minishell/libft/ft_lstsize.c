/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfontene <yfontene@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 11:20:37 by yfontene          #+#    #+#             */
/*   Updated: 2023/05/05 11:20:37 by yfontene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Parameters lst: The beginning of the list.
** Return: value The length of the list
** Description: Counts the number of nodes in a list.*/

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	value;

	value = 0;
	while (lst)
	{
		lst = lst->next;
		value++;
	}
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
	printf("%d\n", ft_lstsize(lst));
	return (0);
}*/