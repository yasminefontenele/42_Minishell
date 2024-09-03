/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   environment.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasmine <yasmine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 10:27:37 by yasmine           #+#    #+#             */
/*   Updated: 2024/08/22 11:12:25 by yasmine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../minishell.h"

//This function is used to duplicate the environment
void dup_array(void)
{
    int i;

    i = 0;
    while (g_env.env[i])
        i++;
    g_env.sorted = malloc(sizeof(char *) * (i + 1));
    g_env.sorted[i] = NULL;
    i = -1;
    while (g_env.env[++i])
        g_env.sorted[i] = ft_strdup(g_env.env[i]);
}

//This function is used to sort the environment
void sort_array(void)
{
    int    i;
    int    r;
    char   *tmp;

    tmp = NULL;
    r = 1;
    dup_array();
    while(r)
    {
        i = -1;
        r = 0;
        while (g_env.sorted[++i])//sort the environment variables
        {
            if (g_env.sorted[i] && g_env.sorted[i + 1] &&
                ft_strncmp(g_env.sorted[i],g_env.sorted[i + 1],
                max_of(ft_strlen(g_env.sorted[i]),
                ft_strlen(g_env.sorted[i + 1]))) > 0)
            {
                tmp = g_env.sorted[i];
                g_env.sorted[i] = g_env.sorted[i + 1];
                g_env.sorted[i + 1] = tmp;
                r = 1;
            }
        }
    }
}

//This function is used to initialize the environment
void env_init(char **env)
{
    int i;
    
    i = 0;
    g_env.exit_status = 0;//initialize the exit status
    while(env[i])//count the number of environment variables
        i++;
    g_env.env = malloc(sizeof(char *) * (i + 2));
    if (g_env.env == NULL)
        ft_error("malloc failed", 1);
    i = -1;
    g_env.env[++i] = ft_strdup("?=0");//o valor da variável ? armazena o status de saída do último comando executado (o valor de retorno)
    while (env[++i])
    {
        g_env.env[i] = ft_strdup(env[i - 1]);
        if (g_env.env[i] == NULL)
            ft_error("malloc failed", 1);
    }
    g_env.env[i] = NULL;
    sort_array();
}