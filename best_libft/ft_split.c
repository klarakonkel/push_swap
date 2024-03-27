/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkonkel <kkonkel@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 16:58:07 by kkonkel           #+#    #+#             */
/*   Updated: 2024/03/05 14:42:56 by kkonkel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_nbrwords(const char *s, char c);

char	**ft_split(char const *s, char c)
{
	char	**array;
	size_t	i;
	size_t	j;
	size_t	nbr_words;

	nbr_words = 0;
	i = 0;
	array = (char **)ft_calloc((ft_nbrwords(s, c) + 1), sizeof(char *));
	if (!array)
		return (NULL);
	while (s[i])
	{
		if (s[i] != c)
		{
			j = 0;
			while (s[i + j] && s[i + j] != c)
				j++;
			array[nbr_words++] = ft_substr(s, i, j);
			i += j;
		}
		else
			i++;
	}
	array[nbr_words] = NULL;
	return (array);
}

static int	ft_nbrwords(const char *s, char c)
{
	size_t	i;
	size_t	nbr_words;

	nbr_words = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			nbr_words++;
			while (s[i] && s[i] != c)
				i++;
		}
		else
			i++;
	}
	return (nbr_words);
}
