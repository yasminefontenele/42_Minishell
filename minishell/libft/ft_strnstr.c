/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfontene <yfontene@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 16:47:27 by yfontene          #+#    #+#             */
/*   Updated: 2023/04/19 16:47:27 by yfontene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	DESCRIPTION
**  The strnstr() function locates the first occurrence of the null-termi‐
**  nated string little in the string big, where not more than len characters
**  are searched.  Characters that appear after a ‘\0’ character are not
**  searched.
**	RETURN VALUES
**  If little is an empty string, big is returned; if little occurs nowhere
**  in big, NULL is returned; otherwise a pointer to the first character of
**  the first occurrence of little is returned.*/

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (s2[0] == '\0')
		return ((char *)s1);
	while (s1[i] != '\0' && i < n)
	{
		j = 0;
		while ((s1[i + j] == s2[j] && s1[i + j] != '\0') && i + j < n)
		{
			if (s2[j + 1] == '\0')
				return ((char *)&s1[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}

/*int	main(void)
{
	char	big[] = "Tudo bem";
	char	little[] = "o";

    printf("Original: %s\n", big);
	printf("Substring:%s\n", ft_strnstr(big, little, 5));
	printf("%s\n", ft_strnstr(big, little, 0));
}*/
