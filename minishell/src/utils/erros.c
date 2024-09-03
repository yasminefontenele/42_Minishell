/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   erros.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasmine <yasmine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 12:08:44 by yasmine           #+#    #+#             */
/*   Updated: 2024/08/23 15:29:45 by yasmine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../minishell.h"

int ft_error(char *description, int exit_code)
{
    write(2, RED, ft_strlen(RED));
    write(2, "Error\n", 6);
    if (description)
        write(2, description, ft_strlen(description));
    else
        write(STDERR, strerror(errno), ft_strlen(strerror(errno)));
    write(2, "\n", 1);
    write(2, RST_COLOR, ft_strlen(RST_COLOR));
    if (exit_code == 1)
        exit(EXIT_FAILURE);
    return (errno);
}

void    error_file(char *file)
{
    ft_putstr_fd(RED, 2);
    ft_putstr_fd(file, 2);
    ft_putstr_fd(": No such file or directory", 2);
    ft_putstr_fd(RST_COLOR, 2);
}

void    error_no_such_file_(char *command)
{
	ft_putstr_fd(RED, 2);
	ft_putstr_fd(command, 2);
	ft_putendl_fd(": No such file or directory", 2);
	ft_putstr_fd(RST_COLOR, 2);
}

void    error_command(char *command)
{
    ft_putstr_fd(RED, 2);
    ft_putstr_fd(command, 2);
    ft_putstr_fd(": command not found", 2);
    ft_putstr_fd(RST_COLOR, 2);
}

int error_redirections(int i, t_execution *execution)
{
    int j;

    j = -1;
    while (execution[i].files[++i])
    {
        if (absolute_value(execution[i].files_type[i]) == REDIR_IN && execution[i].file_dscp[i] == -1)
        {
            error_file(execution[i].files[i]);
            return (-1);
        }
    }
    return (0);
}
/*
* Se o file_type não é um dos tipos esperados (FILE, -FILE, HERE_DOC_END, -HERE_DOC_END),
* ele gera um erro com a mensagem "No redirection File".

* No contexto de redirecionamentos, o sinal de negativo (-) pode ser utilizado para distinguir
* algum estado especial, como um arquivo protegido ou um erro durante o parsing.
*/
int error_redirection(int file_type)
{
    if(!(file_type == FILE || file_type == -FILE || file_type == HERE_DOC_END || file_type == -HERE_DOC_END))
    {
        ft_error("syntax error near unexpected token", 0);
        return (1);
    }
    return (0);
}