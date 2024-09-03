/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfontene <yfontene@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 18:48:41 by yfontene          #+#    #+#             */
/*   Updated: 2023/05/08 18:35:07 by yfontene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* DESCRIPTION
** The  strcmp() function compares the two strings s1 and s2. The locale
** is not taken into account. It returns an integer less than, equal to,
** or greater than zero if s1 is found, respectively, to be less than, to match,
** or  be greater than s2.*/

#include "libft.h"

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	if (s1[i] == '\0' || s2[i] == '\0')
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	while (s1[i] != '\0' && s2[i] != '\0' && i < n - 1)
	{
		if ((unsigned char)s1[i] != (unsigned char)s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		else if ((unsigned char)s1[i] == (unsigned char)s2[i])
			i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

/*int	main()
{
	printf("%d\n", ft_strncmp("Hello", "HelloWorld", 10));
	printf("%d\n", ft_strncmp("test\200", "test\0", 6));
}*/
