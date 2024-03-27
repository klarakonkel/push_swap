/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkonkel <kkonkel@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 12:49:53 by kkonkel           #+#    #+#             */
/*   Updated: 2024/03/05 14:43:40 by kkonkel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*temp_dst;
	const unsigned char	*temp_src;
	size_t				count;

	count = 0;
	if (!src && !dst)
		return (NULL);
	temp_dst = (unsigned char *) dst;
	temp_src = (const unsigned char *) src;
	if ((temp_dst > temp_src) && ((size_t)(temp_dst - temp_src) < len))
	{
		while (len-- > 0)
			temp_dst[len] = temp_src[len];
	}
	else if ((temp_src > temp_dst) && ((size_t)(temp_src - temp_dst) < len))
	{
		while (count++ < len)
			temp_dst[count - 1] = temp_src[count - 1];
	}
	else
	{
		while (len-- > 0)
			*(temp_dst++) = *(temp_src++);
	}
	return (dst);
}
