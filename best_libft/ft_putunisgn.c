/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunisgn.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkonkel <kkonkel@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 12:11:05 by kkonkel           #+#    #+#             */
/*   Updated: 2024/01/20 14:54:13 by kkonkel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putunsign(unsigned long nr)
{
	int			len;
	const char	*base;

	len = 0;
	base = "0123456789";
	if (nr > (ft_strlen(base) - 1))
		len += ft_putunsign(nr / ft_strlen(base));
	len += ft_putchar(*(base + (nr % ft_strlen(base))));
	return (len);
}
