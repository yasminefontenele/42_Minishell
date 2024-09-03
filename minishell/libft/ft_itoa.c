/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfontene <yfontene@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 17:49:18 by yfontene          #+#    #+#             */
/*   Updated: 2023/05/09 18:00:35 by yfontene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*  Allocate (with malloc(3)) and returns a “fresh” string ending with ’\0’
** representing the integer n given as argument. Negative numbers must be
**supported. If the allocation fails, the function returns NULL.*/

#include "libft.h"

static int	num_len(int n)
{
	int	num_len;

	num_len = 0;
	if (n <= 0)
		num_len++;
	while (n != 0)
	{
		n = n / 10;
		num_len++;
	}
	return (num_len);
}

static void	fill_result(int len, int index, int n, char *result)
{
	while (len > index)
	{
		result[len - 1] = n % 10 + '0';
		n /= 10;
		len--;
	}
}

char	*ft_itoa(int n)
{
	char		*result;
	int			i;
	int			len;

	i = 0;
	len = num_len(n);
	result = (char *)malloc(sizeof(char) * len + 1);
	if (!result)
		return (NULL);
	if (n == -2147483648)
	{
		result[0] = '-';
		result[1] = '2';
		n = 147483648;
		i = 2;
	}
	if (n < 0)
	{
		result[0] = '-';
		n *= -1;
		i++;
	}
	fill_result(len, i, n, result);
	result[len] = '\0';
	return (result);
}

/*int main(void)
{
    int n;
    
    n = -9752;
    printf("num:%s\n", ft_itoa(n));
}*/
