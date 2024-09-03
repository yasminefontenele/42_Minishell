/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfontene <yfontene@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 07:07:09 by yfontene          #+#    #+#             */
/*   Updated: 2023/04/19 07:07:09 by yfontene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*DESCRIPTION
** If c is a lowercase letter, toupper() returns its uppercase equivalent,
** if an uppercase representation exists in the  current  locale.   Other‐
** wise,  it  returns c.*/

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	else
		return (c);
}

/*int main() 
{
    char c;

    c = 'm';
    printf("%c -> %c", c, ft_toupper(c));

    c = 'D';
    printf("\n%c -> %c", c, ft_toupper(c));

    c = '9';
    printf("\n%c -> %c", c, ft_toupper(c));
    return 0;
}*/
