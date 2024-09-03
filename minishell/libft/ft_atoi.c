/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfontene <yfontene@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 18:48:41 by yfontene          #+#    #+#             */
/*   Updated: 2023/05/08 18:18:21 by yfontene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* LIBRARY: <stdlib.h>
** SYNOPSIS: Convert a string into an integer
** RETURN VALUE: The converted value or 0 on error.*/

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	sign;
	int	result;

	result = 0;
	sign = 1;
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-')
		sign *= -1;
	if (*str == '-' || *str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
		result = result * 10 + *str++ - '0';
	return (result * sign);
}

/*int main(void)
{
    int a;
    char b[]= {"---85"};
	char c[]= {"\007 8"};
	char d[]= {"\007 8"};
    a = ft_atoi(b);

    printf("%d\n", ft_atoi(b));
	printf("%d\n", ft_atoi(c));
	printf("%d\n", ft_atoi(d));
}*/
