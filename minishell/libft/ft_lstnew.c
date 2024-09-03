/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfontene <yfontene@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 17:27:21 by yfontene          #+#    #+#             */
/*   Updated: 2023/05/15 16:34:52 by yfontene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Allocates (with malloc(3)) and returns a new node. The member variable
** ’content’ is initialized with the value of the parameter ’content’. The
** variable ’next’ is initialized to NULL.*/

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	if (!content)
		new->content = NULL;
	else
		new->content = content;
	new->next = NULL;
	return (new);
}

/*int main(void)
{
	t_list *new;
	char *str;

	str = "Yasmine";
	new = ft_lstnew(str);
	printf("%s\n", new->content);
	return (0);
}*/
