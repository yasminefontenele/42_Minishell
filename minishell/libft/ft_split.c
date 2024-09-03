/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfontene <yfontene@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 08:21:44 by yfontene          #+#    #+#             */
/*   Updated: 2023/05/06 08:21:44 by yfontene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Parameters: s: The string to be split.
** 			   c: The delimiter character.
** Return value: The array of new strings resulting from the split. NULL if the
** allocation fails.
** External functs: malloc, free
** Description: Allocates (with malloc(3)) and returns an array of strings
** obtained by splitting ’s’ using the character ’c’ as a delimiter. The array
** must end with a NULL pointer.*/

#include "libft.h"
#include <stddef.h>

static int	ft_count_word(char *s, char c)
{
	int		count;
	int		wordbetween;

	count = 0;
	wordbetween = 0;
	while (*s)
	{
		if (*s == c)
			wordbetween = 0;
		else if (*s != c && wordbetween == 0)
		{
			wordbetween = 1;
			count++;
		}
		s++;
	}
	return (count);
}

static char	*ft_copy_word(char *s1, char c)
{
	char	*copy;
	int		i;

	i = 0;
	while (s1[i] != c && s1[i] != '\0')
		i++;
	copy = (char *)malloc(i * sizeof(char) + 1);
	if (!copy)
		return (NULL);
	ft_memcpy(copy, s1, i + 1);
	copy[i] = '\0';
	return (copy);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	int		i;

	i = 0;
	if (!s)
		return (NULL);
	split = (char **)malloc((ft_count_word((char *)s, c) + 1) * sizeof(char *));
	if (!split)
		return (NULL);
	while (*s)
	{
		if (*s != c)
		{
			split[i] = ft_copy_word((char *)s, c);
			i++;
			while (*s != c && *s)
				s++;
		}
		else
			s++;
	}
	split[i] = NULL;
	return (split);
}

/*int main(void)
{
	char **split;
	int i;

	i = 0;
	split = ft_split("     yfontene       42 Porto", ' ');

	printf("O numero de strings eh: %d\n",
			ft_count_word("     yfontene       42 Porto", ' '));

	while (split[i])
	{
		printf("%s\n", split[i]);
		i++;
	}
	return (0);
}*/