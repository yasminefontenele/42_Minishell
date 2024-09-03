/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfontene <yfontene@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 19:38:15 by yfontene          #+#    #+#             */
/*   Updated: 2023/04/27 16:10:41 by yfontene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	LIBRARY: <string.h>
**	DESCRIPTION: The memmove() function copies n 
**	bytes from string src to string dest. The two strings may overlap;
**	the copy is always done in a non-destructive manner.
**	The difference between memmove and memcpy it's that memmove uses a buffer*/

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*temp1;
	unsigned char	*temp2;

	temp1 = dest;
	temp2 = (unsigned char *)src;
	if (dest > src)
	{
		while (n--)
			temp1[n] = temp2[n];
	}		
	else
		return (ft_memcpy(dest, src, n));
	return (dest);
}

/*int main(void)
{
    char dest[] = "oldstring";
    char src[] = "newstring";

   printf("Before memmove dest = %s, src = %s\n", dest, src);
   ft_memmove(dest, src, 9);
   printf("After memmove dest = %s, src = %s\n", dest, src);

    return 0;
}*/
