/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfontene <yfontene@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 12:29:07 by yfontene          #+#    #+#             */
/*   Updated: 2023/04/21 12:29:07 by yfontene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* LIBRARY: <string.h>
** SYNOPSIS: save a copy of a string (with malloc)
** DESCRIPTION: The strdup() function allocates sufficient memory for a copy
** of the string s1, does the copy, and returns a pointer to it. The pointer
** may subsequently be used as an argument to the function free(3).*/

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*result;

	result = (char *)malloc(ft_strlen(s1) + 1);
	if (!result)
		return (0);
	ft_memcpy(result, s1, ft_strlen(s1) + 1);
	return (result);
}

/*int	main(void)
{
	char src[] = "Hello, world! :)";
	printf("Return: %s\n", ft_strdup(src));
}*/
