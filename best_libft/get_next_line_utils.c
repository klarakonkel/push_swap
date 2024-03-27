/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkonkel <kkonkel@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 18:59:56 by kkonkel           #+#    #+#             */
/*   Updated: 2024/03/05 14:57:41 by kkonkel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strlcpy_gnl(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize > 0)
	{
		while (src[i] && i < dstsize - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
}

char	*ft_strjoin_gnl(char *s1, char *s2, int *nl_index)
{
	char	*joined;
	size_t	len_combined;

	if (!s1 || !s2)
		return (NULL);
	len_combined = ft_strlen(s1) + ft_strlen(s2);
	joined = (char *)malloc(sizeof(char) * (len_combined + 1));
	if (!joined)
	{
		free(s1);
		return (NULL);
	}
	ft_memcpy(joined, s1, ft_strlen(s1));
	ft_memcpy(joined + ft_strlen(s1), s2, ft_strlen(s2) + 1);
	free(s1);
	if (len_combined > 0 && *(joined + len_combined - 1) == '\n')
		*nl_index = 0;
	return (joined);
}