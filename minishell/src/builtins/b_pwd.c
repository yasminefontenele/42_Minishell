/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   b_pwd.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfontene <yfontene@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 19:56:32 by yasmine           #+#    #+#             */
/*   Updated: 2024/09/04 08:51:34 by yfontene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../minishell.h"

int builtin_pwd(int fd)
{
    char *buffer;
    size_t size;

    size = MAX_PATH;
    buffer = malloc(sizeof(char) * size);
    if (!buffer)
        ft_error("malloc failed", 1);
    buffer = getcwd(buffer, size);
    if (fd == 1)
        return (buffer);
    else
    {
        ft_putendl_fd(buffer, STDOUT);
        free(buffer);
        buffer = NULL;
    }
    return (buffer);
}