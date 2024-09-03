/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfontene <yfontene@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 17:27:31 by yfontene          #+#    #+#             */
/*   Updated: 2023/04/27 16:28:55 by yfontene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* DESCRIPTION: Outputs the string ’s’ to the given file descriptor.*/

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i])
	{
		write(fd, &s[i], 1);
		i++;
	}
}

/*int	main()
{
	char a[] = "Yasmine";
	char *b;
	
	b = a;
	ft_putstr_fd(b, 1);
	write(1, "\n", 1);
	return (0);
}*/
