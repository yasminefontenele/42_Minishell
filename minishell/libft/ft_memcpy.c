/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfontene <yfontene@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 18:26:37 by yfontene          #+#    #+#             */
/*   Updated: 2023/05/16 15:47:46 by yfontene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*  LIBRARY: <string.h>
**  DESCRIPTION: The memcpy() function copies n bytes from memory area src 
**  to memory area dest.  The memory areas must not overlap.
**  Use memmove(3) if the memory areas do overlap.*/

#include "libft.h"

void	*ft_memcpy(void *dest, const void *source, size_t num)
{
	size_t	i;
	char	*s1;
	char	*s2;

	if (!dest && !source)
		return (NULL);
	i = 0;
	s1 = (char *)dest;
	s2 = (char *)source;
	while (i < num)
	{
		s1[i] = s2[i];
		i++;
	}
	return (dest);
}

/*int main()
{
    char str1[] = "Hello, world!";
    char str2[20];
    char str3[20] = "";
    char str4[20] = "Hello, world!";

    ft_memcpy(str2, str1, 5);

    printf("str1: %s\n", str1);
    printf("str2: %s\n", str2);
    printf("str3: %s\n", str3);
    printf("str4: %s\n", str4);

    return 0;
}*/
