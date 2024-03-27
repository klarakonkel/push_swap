/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkonkel <kkonkel@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 17:51:04 by kkonkel           #+#    #+#             */
/*   Updated: 2023/12/04 13:13:27 by kkonkel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	i;
	char	*copied_s1;

	i = 0;
	copied_s1 = (char *) malloc(ft_strlen(s1) + 1);
	if (copied_s1 == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		copied_s1[i] = s1[i];
		i++;
	}
	copied_s1[i] = '\0';
	return (copied_s1);
}
