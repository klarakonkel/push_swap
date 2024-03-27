/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkonkel <kkonkel@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 13:56:44 by kkonkel           #+#    #+#             */
/*   Updated: 2024/03/05 14:42:31 by kkonkel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (size <= dst_len)
		return (src_len + size);
	i = 0;
	while (src[i] != '\0' && (dst_len + i + 1) < size)
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	if (i < size - 1)
		dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}
/*
#include <stdio.h>
size_t	ft_strlen(const char *str);

int	main()
{
	char dst[20] = "iced ";
	const char src[] = "latte macchiato";
	size_t size = sizeof(dst);
	printf("Result: %zu",ft_strlcat(dst, src, size));
}*/
