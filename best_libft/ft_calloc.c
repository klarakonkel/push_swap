/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkonkel <kkonkel@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 17:32:15 by kkonkel           #+#    #+#             */
/*   Updated: 2023/12/04 13:10:29 by kkonkel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*memory_start;
	size_t			i;

	i = 0;
	memory_start = malloc(count * size);
	if (!memory_start)
		return (NULL);
	while (i < count * size)
	{
		memory_start[i] = 0;
		i++;
	}
	return (memory_start);
}
