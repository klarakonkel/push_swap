/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkonkel <kkonkel@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 17:01:13 by kkonkel           #+#    #+#             */
/*   Updated: 2024/03/05 14:43:55 by kkonkel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	cast_c;
	unsigned char	*cast_s;
	size_t			i;

	i = 0;
	cast_c = (unsigned char) c;
	cast_s = (unsigned char *) s;
	while (i < n)
	{
		if (cast_s[i] == cast_c)
			return ((void *) &cast_s[i]);
		i++;
	}
	return (NULL);
}
