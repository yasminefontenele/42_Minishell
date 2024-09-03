/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfontene <yfontene@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 17:22:12 by yfontene          #+#    #+#             */
/*   Updated: 2023/04/27 16:26:10 by yfontene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*  The ft_putchar() writes the character c.*/

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
}

/*int main(void)
{
    char a = 'a';
    
    ft_putchar_fd(a, 1);
    write(1, "\n", 1);
}*/
