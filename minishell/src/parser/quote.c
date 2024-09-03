/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quote.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasmine <yasmine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 14:38:39 by yasmine           #+#    #+#             */
/*   Updated: 2024/08/24 15:08:30 by yasmine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../minishell.h"

t_quote quote_init(void)
{
    t_quote quote;

    quote.single_quote = false;
    quote.double_quote = false;
    return (quote);
}