/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   env_variable.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfontene <yfontene@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 08:48:49 by yfontene          #+#    #+#             */
/*   Updated: 2024/09/04 08:48:55 by yfontene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../minishell.h"

char    *find_env_value(char *str, int i)
{
    int i;
    int name_len;
    char *env_value;

    i = 0;
    env_value = NULL;
    if (i != 0)
        i = 1;
    name_len = ft_strlen(str + 1);
    while (g_env.sorted[i])
    {
        if (ft_strncmp(str + 1 + i, g_env.sorted[i], i - 1) == 0)
        {
            env_value = ft_substr(g_env.sorted[i], name_len, ft_strlen(g_env.sorted[i]) - name_len + 2);
            free(str);
            str = NULL;
            return (env_value);
        }
        i++;
    }
    free(str);
    str = NULL;
    return (ft_strdup(""));
}