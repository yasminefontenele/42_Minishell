/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   builtin_export_utils_error.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasmine <yasmine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 22:21:00 by yasmine           #+#    #+#             */
/*   Updated: 2024/09/02 22:28:36 by yasmine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../minishell.h"

void	print_invalid_identifier_error(char **args)
{
	int		i;

	i = 0;
	while (args[i])
	{
		if (ft_isalpha(args[i][0]) == 0 && args[i][0] != '_')
        {
            ft_putstr_fd("export: `", 2);
            ft_putstr_fd(args[i], 2);
            ft_putstr_fd("': not a valid identifier\n", 2);
        }
        i++;
	}
}

int	is_invalid_identifier(char *arg)
{
	if (ft_isalpha(arg[0]) == 0 && arg[0] != '_')
	{
		return (1);
	}
	return (0);
}