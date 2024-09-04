/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   syntax_check.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfontene <yfontene@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 15:03:59 by yasmine           #+#    #+#             */
/*   Updated: 2024/09/04 08:50:54 by yfontene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../minishell.h"


// Verifica se o token é um redirecionamento (>, >>, <, <<)
int syntax_redirections(t_tokens *tokens)
{
    int i;
    int j;

    i = -1;
    while (++i < tokens->pipe)
    {
        j = -1;
        while (tokens[i].tokens[++j])
        {
            if (is_redirection(tokens[i].type[j] != 0))
            {
                if (tokens[i].tokens[j + 1])
                {
                    if (error_redirection(tokens[i].type[j + 1]) == 1)
                        return (0);
                }
                else
                {
                    ft_error("syntax error near unexpected token", 0);
                    return (0);
                }
            }
        }
    }
    return (1);
}

// Verifica se o token é vazio
int syntax_grammar(char **commands, t_tokens *tokens)
{
    int i;

    i = -1;
    while (commands[++i])//Verifica se o token é vazio
    {
        if (is_empty(commands[i]) == 1)
        {
            ft_error("syntax error near unexpected token", 0);
            return (0);
        }
    }
    i = -1;
    if (syntax_redirections(tokens) == 0)
        return (0);
    return (1);
}