/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   b_cd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasmine <yasmine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 19:34:21 by yasmine           #+#    #+#             */
/*   Updated: 2024/09/02 21:25:00 by yasmine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../minishell.h"

int builtin_cd(char **path)
{
    int return_value;//return value of chdir
    char *oldpwd;
    char *newpwd;

    oldpwd = builtin_pwd(1);
    if (path[0] == NULL)//if no argument is passed
    {
        no_arg_cd(oldpwd);//go to the home directory
        return (0);
    }
    return_value = chdir(path[0]);//change directory
    newpwd = builtin_pwd(1);
    if (return_value == -1)//if the directory does not exist
        ft_error("cd: no such file or directory", 0);
    else
    {
        env_update("OLDPWD", oldpwd);
        env_update("PWD", newpwd);
    }
    free(oldpwd);
    free(newpwd);
    return (1);
}

void   no_arg_cd(char *oldpwd)
{
    int return_value;
    char *newpwd;

    return_value = chdir("home/users/yfontene");
    newpwd = builtin_pwd(1);
    env_update("OLDPWD", oldpwd);
    env_update("PWD", newpwd);
    free(oldpwd);
    free(newpwd);
}