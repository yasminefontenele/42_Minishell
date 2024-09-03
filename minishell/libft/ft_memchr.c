/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfontene <yfontene@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 08:05:26 by yfontene          #+#    #+#             */
/*   Updated: 2023/04/20 08:05:26 by yfontene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* LIBRARY: <string.h>
** DESCRIPTION: The memchr() function scans the initial "n" bytes of the memory
** area pointed to by "s" for the first instance of "c". Both "c" and the bytes
** of the memory area pointed to by "s" are interpreted as unsigned char. The
** memchr() function locates the first occurrence of "c" (converted to an
** unsigned char) in string "s".*/

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;

	str = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (*str == (unsigned char)c)
		{
			return (str);
		}
		str++;
		i++;
	}
	return (NULL);
}

/*int main () 
{
	const char str[] = "https://profile.intra.42.fr/";
	const char ch = '4';
   
	printf("String after |%c| is - %s\n", ch, ft_memchr(str, ch, 25));

	int tab[7] = {-49, 49, 1, -1, 0, -2, 2};
	printf("%s\n", (char *)ft_memchr(tab, -1, 7));
	return(0);
}*/