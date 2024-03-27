/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkonkel <kkonkel@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 15:38:21 by kkonkel           #+#    #+#             */
/*   Updated: 2024/01/09 15:38:21 by kkonkel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putstr(char const *s)
{
	if (!s)
	{
		write(1, "(null)", 6);
		return (6);
	}
	if (*s == '\0')
		write(1, "", 0);
	else
	{
		write(1, s, ft_strlen(s));
	}
	return (ft_strlen(s));
}
/*
int	main()
{
	char	test[] = "test";
	printf("Chars to be printed: %d\n", t_putstr(test));
	return (0);
} */