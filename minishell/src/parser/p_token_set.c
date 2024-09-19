/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_token_set.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfontene <yfontene@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 11:47:09 by yfontene          #+#    #+#             */
/*   Updated: 2024/09/15 14:58:52 by yfontene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../minishell.h"

void		type_of_separator(int *type_of, char **token)
{
    int i;

    i = 0;
    while (token[i])
    {
        if (token[i][0] != ' ' && token[i][0] != '\t')
            type_of[i] = -1;
        else
            type_of[i] = 1;
        i++;
    }
}

void filler_stokens(char **cmds, t_tokens **token, int nbr)
{
    int i;

    i = 0;
    while (cmds[i])
    {
        (*token)[i].pipe = nbr;
        (*token)[i].nbr = count_token(cmds[i]);
        (*token)[i].type = set_token((*token)[i]);
        (*token)[i].tokens = token_split(cmds[i], (*token)[i].nbr);
        (*token)[i] = dollar_config(*token +  i);
        i++;
    }
}

//coordinates the token extraction process and grammar checking.
void    tokenize_commands(char **cmds)
{
    int         i;
    int         backslash;
    int			j;
    t_tokens	*token;

    i = 0;
    backslash = 1;
    while (cmds[i])
        i++;
    j = i;
    token = malloc(sizeof(t_tokens) * i);
    filler_stokens(cmds, &token, j);
    backslash = valid_backslash(cmds);
    if (backslash == 0)
        ft_error("Invalid backslash", 1);
    if (syntax_grammar(cmds, token) == 1)
        exec_process_quotes(token);
    i = -1;
    while (i < j)
    {
        free_tokens(token[i]);
        free(token[i].type);
    }
    free(token);
}
