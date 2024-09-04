/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfontene <yfontene@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 11:14:59 by yasmine           #+#    #+#             */
/*   Updated: 2024/09/04 08:50:36 by yfontene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../minishell.h"

void    free_tokens(t_tokens token)
{
    int i;

    i = -1;
    while (token.tokens[++i])
    {
        free(token.tokens[i]);
        token.tokens[i] = NULL;
    }
    free(token.tokens[i]);
    token.tokens[i] = NULL;
    free(token.tokens);//Libera o array que armazena os ponteiros para os tokens
    token.tokens = NULL;
}

void free_dollar(char **original, char **replacement)
{
    int i;

    i = -1;
    while (original[++i])
    {
        free(original[i]);
        original[i] = NULL;
    }
    i = -1;
    while (replacement[++i])
    {
        free(replacement[i]);
        replacement[i] = NULL;
    }
    free(original);
    free(replacement);
    original = NULL;
    replacement = NULL;
}

void    free_str_array(char **arr)
{
    int i;
    
    i = 0;
    while (arr[i])
    {
        free(arr[i]);
        arr[i] = NULL;
        i++;
    }
    free(arr);
}

/* falta o free_execution para liberar o t_execution*/