/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfontene <yfontene@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 16:40:44 by yfontene          #+#    #+#             */
/*   Updated: 2023/04/28 17:13:53 by yfontene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* DESCRIPTION: Allocates (with malloc(3)) and returns a new string, which is
** the result of the concatenation of ’s1’ and ’s2’.
** RETURN: The new string. NULL if the allocation fails*/

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_str;
	int		i;
	int		j;

	if (!s1 || !s2)
		return (NULL);
	new_str = (char *) malloc (ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!new_str)
		return (NULL);
	i = -1;
	j = -1;
	while (s1[++i])
		new_str[i] = s1[i];
	while (s2[++j])
		new_str[i++] = s2[j];
	new_str[i] = '\0';
	return (new_str);
}

/*int main(void)
{
    char a[] = "Yasmine ";
    char b[] = "Fontenele";
    
    printf("a = %s  ||  b = %s\n", a, b);
    printf("Join = %s\n", ft_strjoin(a, b));
}*/
