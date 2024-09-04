/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   builtin_check.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfontene <yfontene@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 15:40:56 by yasmine           #+#    #+#             */
/*   Updated: 2024/09/04 08:49:23 by yfontene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../minishell.h"

char *is_builtin(char *command)
{
    if (command[0] == ' ' || command[0] == '\'' || command[0] == '\"')
		command++;
    if (ft_strcmp(command, "echo") == 0)
        return ("builtin_echo");
    if (ft_strcmp(command, "cd") == 0)
        return ("builtin_cd");
    if (ft_strcmp(command, "pwd") == 0)
        return ("builtin_pwd");
    if (ft_strcmp(command, "export") == 0)
        return ("builtin_export");
    if (ft_strcmp(command, "unset") == 0)
        return ("builtin_unset");
    if (ft_strcmp(command, "env") == 0)
        return ("builtin_env");
    if (ft_strcmp(command, "exit") == 0)
        return ("builtin_exit");
    return ("not_builtin");
}