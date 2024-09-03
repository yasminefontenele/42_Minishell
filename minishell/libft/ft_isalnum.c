/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfontene <yfontene@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 18:11:40 by yfontene          #+#    #+#             */
/*   Updated: 2023/04/27 16:15:27 by yfontene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* LIBRARY: <ctype.h>
** SYNOPSIS: alphanumeric character test
** DESCRIPTION: The isalnum() function tests for any 
** character for which isalpha or isdigit is true.*/

#include "libft.h"

int	ft_isalnum(int teste)
{
	if (((teste >= 'a') & (teste <= 'z')) || ((teste >= 'A') & (teste <= 'Z'))
		|| ((teste >= '0') & (teste <= '9')))
		return (1);
	else
		return (0);
}

/*#include<stdio.h>
int main(void)
{
    
    int a = '*';
    ft_isalnum(a);

    printf("%d\n", ft_isalnum(a));
}*/
