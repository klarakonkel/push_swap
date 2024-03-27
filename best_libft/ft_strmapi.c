/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkonkel <kkonkel@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 12:19:20 by kkonkel           #+#    #+#             */
/*   Updated: 2024/03/05 14:42:13 by kkonkel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f) (unsigned int, char))
{
	int				len;
	unsigned int	i;
	char			*applied_f;

	i = 0;
	len = ft_strlen(s);
	applied_f = malloc((len + 1) * sizeof(char));
	if (!applied_f)
		return (NULL);
	while (s[i] != '\0')
	{
		applied_f[i] = f(i, s[i]);
		i++;
	}
	applied_f[i] = '\0';
	return (applied_f);
}
