/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfontene <yfontene@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 07:13:42 by yfontene          #+#    #+#             */
/*   Updated: 2023/04/19 07:13:42 by yfontene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* DESCRIPTION
** If c is an uppercase letter, tolower() returns  its  lowercase  equiva‐
** lent, if a lowercase representation exists in the current locale.  Oth‐
** erwise, it returns c.*/

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	else
		return (c);
}

/*int main() 
{
    char c;

    c = 'm';
    printf("%c -> %c", c, ft_tolower(c));

    c = 'D';
    printf("\n%c -> %c", c, ft_tolower(c));

    c = '9';
    printf("\n%c -> %c", c, ft_tolower(c));
    return 0;
}*/
