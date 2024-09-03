/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfontene <yfontene@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 15:20:43 by yfontene          #+#    #+#             */
/*   Updated: 2023/05/09 18:11:26 by yfontene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* DESCRIPTION: The strrchr() function returns a pointer to the last occurrence
** of the character c in the string s.
** RETURN VALUE: strrchr() return a pointer  to  the  matched character or NULL
** if the character is not found. The terminating null byte is considered part of
** the string, so that if  c  is  specified  as '\0', these functions return a
** pointer to the terminator.*/

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = -1;
	while (s[++i])
		;
	while (i >= 0)
	{
		if (s[i] == (unsigned char)c)
			return (&((char *)s)[i]);
		i--;
	}
	return (0);
}

/*int main(void)
{
	int ch = 'r';
	char text[] = "The quick brown dog jumps over the lazy fox";
	char st1[] =  "         1         2         3         4         5";
	char st2[] =  "12345678901234567890123456789012345678901234567890";

	printf( "String to be searched:\n      %s\n", text);
	printf( "      %s\n      %s\n\n", st1, st2 );
	printf( "Search char: %c\n", ch );
	char *chr;
	chr = ft_strrchr(text, ch);

	printf ("Last occurence of 'r' found at %d \n",chr-text+1);
   
	return(0);
}*/