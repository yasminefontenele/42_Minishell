/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfontene <yfontene@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 18:48:41 by yfontene          #+#    #+#             */
/*   Updated: 2023/04/27 16:20:32 by yfontene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* LIBRARY: <ctype.h>
** SYNOPSIS: printing character test (space character inclusive)
** DESCRIPTION: The isprint() function tests for any printing
** character, including space (' ').*/

#include "libft.h"

int	ft_isprint(int teste)
{
	if ((teste >= 32) & (teste <= 126))
		return (1);
	else
		return (0);
}

/*int main(void)
{
    
    int a = '*';
    ft_isprint(a);

    printf("%d\n", ft_isprint(a));
}*/
