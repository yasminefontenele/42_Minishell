/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfontene <yfontene@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 06:46:50 by yfontene          #+#    #+#             */
/*   Updated: 2023/04/21 06:46:50 by yfontene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* LIBRARY: <stdlib.h>
** DESCRIPTION: calloc() function is used to dynamically allocate
** multiple blocks of memory. calloc needs two arguments.
** The number of blocks(size_t numb) and the size of each block(size_t size).
** Memory allocated by calloc is initialized to zero.
** calloc return NULL when sufficient memory is not available in the heap.*/

#include "libft.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	void	*ptr;

	ptr = malloc(nitems * size);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, nitems * size);
	return (ptr);
}

/*int	main(void)
{
	printf ("Return: %s\n", (char *)ft_calloc(5, 4));
}*/
