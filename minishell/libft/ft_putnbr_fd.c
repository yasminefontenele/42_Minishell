/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfontene <yfontene@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 15:59:08 by yfontene          #+#    #+#             */
/*   Updated: 2023/05/09 18:14:40 by yfontene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The ft_putnbr_fd() function outputs a number to the output specified by
** the file descriptor(fd). A file descriptor of 0, 1, or 2, refers to the
** standard input, standard output, or standard error, respectively.*/

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		ft_putstr_fd("-2147483648", fd);
		return ;
	}
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = -n;
	}
	if (n >= 10)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
	if (n < 10)
		ft_putchar_fd(n + 48, fd);
}

/*int	main(void)
{
	int	a;

	a = -5555555;
	ft_putnbr_fd(a, 1);
	write(1, "\n", 1);
}*/
