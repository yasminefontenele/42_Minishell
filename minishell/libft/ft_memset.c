/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfontene <yfontene@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 18:10:03 by yfontene          #+#    #+#             */
/*   Updated: 2023/04/27 16:24:01 by yfontene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* LIBRARY: <string.h>
** DESCRIPTION: The memset function fills the firsts "n" 
** bytes of the string "s" for "c".*/

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char	*ptr;

	ptr = (char *)b;
	while (len > 0)
	{
		ptr[len - 1] = c;
		len--;
	}
	return (b);
}

/*int main()
{
   char str[50] = "Yasmine Fontenele Macedo";

   printf("%s\n", ft_memset(str,'?',7));
   
   return(0);
}*/
