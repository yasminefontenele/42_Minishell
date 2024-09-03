/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfontene <yfontene@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 18:11:40 by yfontene          #+#    #+#             */
/*   Updated: 2023/04/27 16:19:36 by yfontene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* LIBRARY: <ctype.h>
** SYNOPSIS: decimal-digit character test
** DESCRIPTION:	The isdigit()function tests for a decimal digit character*/

#include "libft.h"

int	ft_isdigit(int teste)
{
	if ((teste >= '0') & (teste <= '9'))
		return (1);
	else
		return (0);
}

/*int main(void)
{
    
    int a = 'a';
    ft_isdigit(a);

    printf("%d\n", ft_isdigit(a));
}*/
