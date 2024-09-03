/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfontene <yfontene@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 12:21:44 by yfontene          #+#    #+#             */
/*   Updated: 2023/05/08 18:47:11 by yfontene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* LIBRARY: <string.h>
** SYNOPSIS: locate character in string (first occurrence)
** DESCRIPTION: The strchr() function locates the first occurrence of c
** (converted to a char) in the string pointed to by s. The terminating null
** character is considered to be part of the string; therefore if c is `\0',
** the functions locate the terminating `\0'.*/

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*str;
	int		i;

	str = (char *)s;
	i = -1;
	while (str[++i] != '\0')
		if (str[i] == (char)c)
			return (&str[i]);
	if (str[i] == (char)c)
		return (&str[i]);
	return (NULL);
}

/*int main(void)
{
	const char str[] = "Yasmine Fontenele Macedo";
	const char ch = 'F';
	char *chr;

   chr = ft_strchr(str, ch);

   printf("The first occurrence of %c in '%s' is '%s'\n", ch, str, chr);
   
   return(0);
}*/
