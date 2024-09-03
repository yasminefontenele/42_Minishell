/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfontene <yfontene@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 18:40:47 by yfontene          #+#    #+#             */
/*   Updated: 2023/04/27 16:34:02 by yfontene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* DESCRIPTION: Applies the function f to each character of the string passed
** as argument, and passing its index as first argument. Each character is
** passed by address to f to be modified if necessary
** Param. #1: The string to iterate.
** Param. #2: The function to apply to each character of s and its index.
** Return value: None */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;

	if (s == 0 || f == 0)
		return ;
	i = 0;
	while (*s != '\0')
	{
		f(i++, s++);
	}
}

/*void apply_func(unsigned int index, char* character)
{
    printf("Index %d: %c\n", index, *character);
    *character = 'x'; // replace character with 'x'
}

int main()
{
    char str[] = "hello world";
    printf("Original string: %s\n", str);
    ft_striteri(str, &apply_func);
    printf("Modified string: %s\n", str);
    return 0;
}*/
/*void my_func(unsigned int i, char *c)
{
	(void)i;
	if (*c >= 'a' && *c <= 'z')
	{
		*c -= 32;
	}
}
int main()
{
	char str[] = "hello.";
	ft_striteri(str, &my_func);
	printf("%s", str);
	return (0);
}*/
