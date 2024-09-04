/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strings_handling.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfontene <yfontene@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 11:31:24 by yasmine           #+#    #+#             */
/*   Updated: 2024/09/04 08:50:47 by yfontene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../minishell.h"

//add a character to a string
char ft_stringjoin(char *str, char c)
{
    int i;
    int len;
    char *new_string;

    i = -1;
    len = ft_strlen(str) + 1;
    if (c != '\0')
        len++;
    new_string = malloc(sizeof(char) * len);
    if (new_string == NULL)
        return (NULL);
    while (str[++i])
        new_string[i] = str[i];
    if (c != '\0')
        new_string[i++] = c;
    new_string[i] = '\0';
    free(str);
    return (new_string);
}

void    join_backslash(char **path)
{
    int i;
    char    *tmp;
    
    i = -1;
    if (path == NULL)
        return ;
    while (path [++i])
    {
        tmp = ft_strjoin(path[i], "/");
        free(path[i]);
        path[i] = tmp;
    }
}

static int extract_substring(char **content, char *line, int *separatorI, int i, int j, int len)
{
    content[i] = ft_substr(line, j, len);
    if (!content[i])
    {
        while (i--)
            free(content[i]);
        free(content);
        return -1;
    }
    return 0;
}

char **separator_split(char *line, int *separatorI, int nbr_separator)
{
    int i;
    int j;
    int len;
    char **content;

    content = malloc(sizeof(char *) * (nbr_separator + 2));
    if (!content)
        return NULL;
    i = 0;
    j = 0;
    while (i < nbr_separator + 1)
    {
        if (i == nbr_separator)
            len = ft_strlen(line) - j;
        else
            len = separatorI[i] - j;

        if (extract_substring(content, line, separatorI, i, j, len) < 0)
            return NULL;

        j = separatorI[i] + 1;
        i++;
    }
    content[i] = NULL;
    return (content);
}


int	str_isdigit(char *str)
{
	int		i;

	i = 0;
	if (!(str[i] && (str[i] == '-' || ('0' <= str[i] && str[i] <= '9'))))
		return (0);
	while (str[i])
	{
		if (!('0' <= str[i] && str[i] <= '9'))
			return (0);
        i++;
	}	
	return (1);
}



