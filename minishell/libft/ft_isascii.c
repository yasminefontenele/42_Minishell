/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfontene <yfontene@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 18:48:41 by yfontene          #+#    #+#             */
/*   Updated: 2023/04/27 16:16:43 by yfontene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* LIBRARY: <ctype.h>
** SYNOPSIS: test for ASCII character
** DESCRIPTION: The isascii() function tests for an ASCII character,
** which is any character between 0 and 127.*/

#include "libft.h"

int	ft_isascii(int teste)
{
	if ((teste >= 0) & (teste <= 127))
		return (1);
	else
		return (0);
}

/*#include<stdio.h>
int main(void)
{
    
    int a = '*';
    ft_isascii(a);

    printf("%d\n", ft_isascii(a));
}*/
