/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   b_env.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasmine <yasmine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 22:56:48 by yasmine           #+#    #+#             */
/*   Updated: 2024/09/02 23:11:25 by yasmine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../minishell.h"

int contains_equal(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        if (str[i] == '=')
            return (1);
        i++;
    }
    return (0);
}

int builtin_env(void)
{
    int i;

    i = 0;
    while (g_env.env[++i])
    {
        if (contains_equal(g_env.env[i]) == 1)
            printf("%s\n", g_env.env[i]);
    }
    return (0);
}
