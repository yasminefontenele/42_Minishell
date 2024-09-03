/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   b_pwd.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasmine <yasmine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 19:56:32 by yasmine           #+#    #+#             */
/*   Updated: 2024/09/02 20:50:49 by yasmine          ###   ########.fr       */
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