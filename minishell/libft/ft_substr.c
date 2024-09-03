/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfontene <yfontene@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 13:50:49 by yfontene          #+#    #+#             */
/*   Updated: 2023/05/10 13:50:49 by yfontene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Parameters: s: The string from which to create the substring.
**			   start: The start index of the substring in the string ’s’.
**			   len: The maximum length of the substring.
** Return value: The substring. NULL if the allocation fails.
** External functs: malloc
** Description: Allocates (with malloc) and returns a substring from the string
** ’s’. The substring begins at index ’start’ and is of maximum size ’len’.*/

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substring;

	if (!s)
		return (NULL);
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	substring = malloc(len * sizeof(char) + 1);
	if (!substring)
		return (NULL);
	ft_memcpy(substring, &s[start], len);
	substring[len] = '\0';
	return (substring);
}

/*int main ()
{
	char *s = "Hello World!";
	char *sub = ft_substr(s, 0, 5);
	printf("%s\n", sub);
	return (0);
}*/