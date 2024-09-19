/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prompt_line.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfontene <yfontene@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 14:55:00 by yfontene          #+#    #+#             */
/*   Updated: 2024/09/15 15:03:44 by yfontene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minishell.h"

/*
\e[1;1H positions the cursor at line 1, column 1.
\e[2J clears the terminal screen.
*/
void	clear_window(void)
{
	write(1, "\e[1;1H\e[2J", ft_strlen("\e[1;1H\e[2J"));
}

int	is_empty_line(char *line)
{
	int		i;

	i = 0;
	while (line[i])
	{
		if (line[i] != ' ' && line[i] != '\t')
		{
			return (0);
		}
        i++;
	}
	return (1);
}

char	*read_line(void)
{
	char	*line;
	char	*prom;

	prom = prompt();
	rl_on_new_line();
	line = readline(prom);
	if (line == NULL)
	{
		exit(EXIT_SUCCESS);
	}
	if (is_empty_line(line) == 0)
		add_history(line);
	free(prom);
	return (line);
}
