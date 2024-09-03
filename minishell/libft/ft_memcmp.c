/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfontene <yfontene@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 09:08:55 by yfontene          #+#    #+#             */
/*   Updated: 2023/04/20 09:08:55 by yfontene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* LIBRARY: <string.h>
** DESCRIPTION:	 The memcmp() function compares byte string s1 
** against byte string s2. Both strings are assumed to be n bytes long.
** RETURN VALUE: an integer less than, equal to, or greater than zero
** if the first n bytes  of  s1  is  found, respectively,
** to be less than, to match, or be greater than the first n bytes of s2.*/

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	unsigned char	*s1;
	unsigned char	*s2;
	size_t			i;

	i = 0;
	s1 = (unsigned char *)str1;
	s2 = (unsigned char *)str2;
	while (i < n)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}

/*int	main(void)
{
	char str1[] = "bomdiaaa";
	char str2[] = "Ola";
	char str3[] = "bomdiaaaaa";

	printf("Primeira String: %s", str1);
	printf("\nSegunda String: %s", str3);
	printf("\nReturn: %d", (int)ft_memcmp(str1, str3, 10));
}*/
