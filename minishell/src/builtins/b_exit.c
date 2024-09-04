/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   b_exit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfontene <yfontene@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 09:58:01 by yasmine           #+#    #+#             */
/*   Updated: 2024/09/04 08:51:25 by yfontene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../minishell.h"

//Terminates the shell or a script, with an optional exit code.
/*  
EXIT(255) -> immediately terminates the current process. This means that the entire program
(or the current process) will terminate, and the code 255 will be passed to the operating
system or any other waiting process.
This wiil be used when the process executing the builtin_exit is not a child process. In this case, the shell should terminate completely.
RETURN(255) -> This will be used when the process executing the builtin_exit is a child process. In this case, the shell should not terminate completely.
*/
int     builtin_exit(char **args, int child_process, int count)
{
    count = 0;
    while(args[count])
        count++;
    if (args == NULL)
        exit(0);//exit(0) is equivalent to return 0 from main
    if (str_isdigit(args[0] == 0))
    {
        ft_error("in 'exit' numeric argument is required", 0);
        if (child_process == 1)
            return (255);
        exit(255);
    }
    else
    {
        if (count != 1)
            ft_error("exit: too many arguments", 0);
        else
            exit((unsigned char)ft_atoi(args[0]));
    }
    return (0);
}