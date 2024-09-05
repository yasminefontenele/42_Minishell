/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_token_set.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfontene <yfontene@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 11:47:09 by yfontene          #+#    #+#             */
/*   Updated: 2024/09/04 19:16:21 by yfontene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../minishell.h"

int		type_of_separator(int type_of, char **token)
{
    int i;

    i = 0;
    while (token[i])
    {
        if (token[i][0] != ' ' && token[i][0] != '\t')
            type_of = -1;
        else
            type_of = 1;
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
        //(*token)[i] = replace_dollar((*token)[i]);TO DO
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
    j = 0;
    backslash = valid_backslash(cmds);
    while (cmds[i])
        i++;
    token = malloc(sizeof(t_tokens) * i);
    if (!token)
        ft_error("Malloc failed in tokenize_commands", 1);
    filler_stokens(cmds, &token, i);
    if (backslash == 0)
        ft_error("Invalid backslash", 1);
    if (syntax_grammar(cmds, token) == 1)
        exec_process_quotes(token);
    i = 0;
    while (i < j)
    {
        free_tokens(token[i]);
        free(token[i].type);
        i++;
    }
    free(token);
}