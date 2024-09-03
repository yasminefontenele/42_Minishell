/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   b_echo.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasmine <yasmine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 21:28:41 by yasmine           #+#    #+#             */
/*   Updated: 2024/09/02 21:32:09 by yasmine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../minishell.h"

//'ECHO' displays a line of text on standard output
int builtin_echo(char **args, int *type)
{
    int i;
    char **new_args;
    int new_line;

    i = -1;
    new_line = 1;
    if (count(args) == 0)
    {
        printf("\n");
        return (0);
    }
    new_args = args;
}