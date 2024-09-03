/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfontene <yfontene@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 18:11:40 by yfontene          #+#    #+#             */
/*   Updated: 2023/05/17 15:42:50 by yfontene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* LIBRARY: <ctype.h>
** SYNOPSIS: alphabetic character test
** DESCRIPTION:	The isalpha() function tests for any
** character for which isupper(3) or islower(3) is true.
*/

#include "libft.h"

int	ft_isalpha(int teste)
{
	if (((teste >= 'a') & (teste <= 'z')) || ((teste >= 'A') & (teste <= 'Z')))
		return (1);
	else
		return (0);
}

#include<stdio.h>
int main(void)
{
    
    int a = 'a';
    ft_isalpha(a);

    printf("%d\n", ft_isalpha(a));
}
