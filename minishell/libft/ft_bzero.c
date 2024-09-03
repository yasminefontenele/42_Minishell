/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfontene <yfontene@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 18:12:52 by yfontene          #+#    #+#             */
/*   Updated: 2023/04/27 16:13:24 by yfontene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* LIBRARY: <strings.h>
** SYNOPSIS: write zeroes to a byte string
**
** DESCRIPTION:
** 	The bzero() function writes n zeroes bytes to the string s. If n is
**	zero, bzero() does nothing.*/

#include "libft.h"

void	*ft_bzero(void *b, size_t len)
{
	ft_memset (b, 0, len);
	return (0);
}

/*int main()
{
   char str[50] = "Yasmine Fontenele Macedo";

   printf("%s\n", ft_bzero(str, 7));
   
   return(0);
}*/
