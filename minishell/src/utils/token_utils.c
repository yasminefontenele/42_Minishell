/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   token_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasmine <yasmine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 15:48:35 by yasmine           #+#    #+#             */
/*   Updated: 2024/09/02 16:13:51 by yasmine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../minishell.h"

int skip_sapace(char *line, int i)
{
    while (line[i] && (line[i] == ' ' || line[i] == '\t'))
        i++;
    return (i);
}


int	get_end(char *line, int i)
{
	if ((line[i] == '>' || line[i] == '<')
		&& count_backslash(line, i) % 2 == 0)
        i = token_redir(line, i);
    else if (line[i] == '|' && count_backslash(line, i) % 2 == 0)
        i = token_pipe(line, i);
    else if (line[i] == '$' && count_backslash(line, i) % 2 == 0)
        i = token_dollar(line, i);
    else if (line[i] == '\'' || line[i] == '\"')
    {
        i = token_quote(line, i);
        if (i == -1)
            ft_error("syntax error, unclosed quotes.", 0);
    }
    else
        i = token_word(line, i);
    return (i);
}

int count_token(char *line)
{
    int     i;
    int     count;

    i = 0;
    count = 0;
    while (line[i])
    {
        if (line[i])
            i = skip_sapace(line, i);
        if (line[i])
        {
            i = get_end(line, i);
            if (i == -1)
                return (count);
            count++;
        }
        else
            return (count);
    }
    return (count);
}