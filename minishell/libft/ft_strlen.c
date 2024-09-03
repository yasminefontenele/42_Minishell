/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfontene <yfontene@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 18:48:41 by yfontene          #+#    #+#             */
/*   Updated: 2023/04/27 16:42:19 by yfontene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* DESCRIPTION
** The strlen() function calculates the length of the string pointed to by
** s, excluding the terminating null byte ('\0').
** RETURN VALUE
** The strlen() function returns the number of bytes in the string pointed
** to by s.*/

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

/*int	main()
{
	const char a[] = "Yasmine";
	const char *b;
	
	b = a;
	printf("numero de caracteries:%zu\n", ft_strlen(b));
}*/
