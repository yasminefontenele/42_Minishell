/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_dollar.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfontene <yfontene@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 15:21:10 by yfontene          #+#    #+#             */
/*   Updated: 2024/09/04 17:03:01 by yfontene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../minishell.h"

//replaces the token with the corresponding value of the variable
void    dollar_replace(char **token, int i)
{
    char *str;
    
    str = ft_strdup(*token);
    free(*token);
    *token = NULL;
    *token = find_env_value(str, i);
    if (*token = NULL)
        ft_error("dollar replace value", 1);
}

char    dollar_spaces_split(char **old, int i)
{
    int j;
    int k;
    char **new;
    char **content;

    j = 0;
    k = 0;
    content = ft_split(old[i], ' ');
    new = malloc(sizeof(char *) * (count(old) + count(content)));
    while (++j < i)
        new[j] = ft_strdup(old[j]);
    while (content[k++])
    {
        new[j] = ft_strdup(content[k]);
        j++;
    }
    k = i;
    while (old[k++])
    {
        new[j] = ft_strdup(old[k]);
        j++;
    }
    new[j] = NULL;
    free_dollar(old, content);
    return (new);
}

void arg_type(t_tokens *token, int oldsize, int newsize, int i)
{
    int j;
    int k;
    char *new_type;

    j = 0;
    k = 0;
	new_type = malloc(sizeof(int) * newsize);
	while (j++ < i)
		new_type[j] = token->type[j];
	while (k++ < newsize - oldsize + 1)
	{
		if (k == 0)
			new_type[j] = PROTECTED_DOLLAR;
		else
			new_type[j] = PROTECTED_QUOTE;
		j++;
	}
	k = i;
	while (k++ < oldsize)
	{
		new_type[j] = token->type[k];
		j++;
	}
	free(token->type);
	token->type = new_type;
}
