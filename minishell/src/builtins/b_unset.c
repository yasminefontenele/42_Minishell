/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   b_unset.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfontene <yfontene@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 15:11:11 by yasmine           #+#    #+#             */
/*   Updated: 2024/09/04 08:51:38 by yfontene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../minishell.h"

//looks for the index of a specific environment variable in the g_env.env array.
int    find_env_index(char *var)
{
    int i;
    int len;

    i = 0;
    len = ft_strlen(var);
    while (g_env.env[i])
    {
        if (ft_strncmp(g_env.env[i], var, len - 1) == 0
        && g_env.env[i][len] == '=')
            return (i);
        i++;
    }
    return (-1);
}

void    remove_env_var(int index)
{
    int     i;
    int     j;
    int     len;
    char    **new_env;
    
    i = -1;
    j = 0;
    len = count(g_env.env);
    new_env = malloc(sizeof(char *) * len);
    while (g_env.env[++i] && i != index)
        new_env[j++] = g_env.env[i];
    while (g_env.env[++i])
        new_env[j++] = ft_strdup(g_env.env[i]);
    new_env[j - 1] = NULL;
    free_arr(g_env.env);
    g_env.env = new_env;
    free_arr(g_env.sorted);
    sort_env();
}

//Removes (undoes) an environment or shell variable. If the variable name is not
//found in the environment, the shell variable is not removed.
int builtin_unset(char **args)
{
    int i;
    int index;

    i = 0;
    while (args[i])
    {
        index = find_env_index(args[i]);
        if (index != -1)
            remove_env_var(index);
        i++;
    }
    return (0);
}

