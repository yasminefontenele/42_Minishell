/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfontene <yfontene@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 16:35:38 by yfontene          #+#    #+#             */
/*   Updated: 2023/05/08 15:19:27 by yfontene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Allocates (with malloc(3)) and returns a copy of ’s1’ with the characters
** specified in ’set’ removed from the beginning and the end of the string.*/

#include "libft.h"

char	*ft_strtrim(char const *str, char const *set)
{
	char	*result;
	int		start;
	int		end;

	start = 0;
	if (!str)
		return (NULL);
	end = ft_strlen((char *)str);
	while (str[start] && ft_strchr((char *)set, str[start]))
		start++;
	while (end > start && ft_strchr((char *)set, str[end - 1]))
		end--;
	result = ft_substr(str, start, (end - start));
	return (result);
}

/*int main()
{
    char a[] = "  aYasminex  ";
    char s[] = "ax ";
    char *str;
	printf("str inicial:|%s|\n", a);
	printf("trim:|%s|\n", s);
    str = ft_strtrim(a, s);
    printf("trimmed:|%s|\n", str);
    return 0;
}*/