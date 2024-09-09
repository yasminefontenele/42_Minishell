/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   env_variable.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfontene <yfontene@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 08:48:49 by yfontene          #+#    #+#             */
/*   Updated: 2024/09/09 14:09:46 by yfontene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../minishell.h"

char    *find_env_value(char *str, int i)
{
    int     j;
    int     name_len;
    char    *env_value;

    j = 0;
    env_value = NULL;
    if (i != 0)
        i = 1;
    name_len = ft_strlen(str + 1);
    while (g_env.sorted[j])
    {
        if (ft_strncmp(str + 1 + i, g_env.sorted[j], i - 1) == 0)
        {
            env_value = ft_substr(g_env.sorted[j], name_len, ft_strlen(g_env.sorted[j]) - name_len + 2);
            free(str);
            str = NULL;
            return (env_value);
        }
        j++;
    }
    free(str);
    str = NULL;
    return (ft_strdup(""));
}