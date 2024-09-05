/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   b_export.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfontene <yfontene@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 21:41:20 by yasmine           #+#    #+#             */
/*   Updated: 2024/09/05 19:44:33 by yfontene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../minishell.h"

void    print_export(void)
{
    int i;
    int j;

    i = 0;
    while (g_env.sorted[++i])
    {
        ft_putstr_fd("declare -x ", 1);
        j = -1;
        while (g_env.sorted[i][++j])
        {
            if (g_env.sorted[i][j] == '=')
                ft_putstr_fd("=\"", 1);
            ft_putchar_fd(g_env.sorted[i][j], 1);
        }
        ft_putstr_fd("\"\n", 1);
    }
}

char    *extract_var(char *arg)
{
    int i;
    int variable;

    i = 0;
    while (arg[i])
    {
        if (arg[i] == '=')//if the variable is assigned a value
            break ;
        i++;
    }
    variable = ft_substr(arg, 0, i);
    return (variable);
}

char    *extract_value(char *arg)
{
    int     i;
    char    *value;

    i = 0;
    while (arg[i])
    {
        if (arg[i] == '=')
            break ;
        i++;
    }
    if (arg[i] == '=')
        value = ft_strdup(arg + i + 1);
    else
        value = ft_strdup("");
    return (value);
}

int     export(char **args)
{
    int     i;
    char    *variable;
    char    *value;
    int     invalid;//if the variable is invalid or not

    i = 0;
    invalid = 0;
    while (args[i])
    {
        if(is_invalid_identifier(args[i]))
        {
            variable = extract_var(args[i]);
            value = extract_value(args[i]);
            env_update(variable, value);
            free(variable);
            free(value);
        }
        else
            invalid = 1;
        i++;
    }
    free_arr(args);
    return (invalid);
}

/*
Sets or exports environment variables to be used by subsequent
commands or scripts. (passed to child processes after fork)
*/
int     builtin_export(char **args, int *type)
{
    char **new_args;
    
    if (count(args) == 0)
    {
        print_export();
        return (0);
    }
    new_args = join_args(args, type);
    print_invalid_identifier_error(new_args);
    return (export(new_args));
}

