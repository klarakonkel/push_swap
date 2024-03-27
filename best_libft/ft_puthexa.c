/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkonkel <kkonkel@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 16:11:59 by kkonkel           #+#    #+#             */
/*   Updated: 2024/01/09 16:11:59 by kkonkel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_puthexa(unsigned long n, char format)
{
	char			*base;
	int				i;
	unsigned int	base_len;

	if (format == 'x')
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
	i = 0;
	base_len = ft_strlen(base);
	if (n > base_len - 1)
		i += ft_puthexa(n / base_len, format);
	i += ft_putchar(*(base + (n % base_len)));
	return (i);
}
/*
int	main()
{
	char test[] = "15EE67ACD";
	printf("Chars to be printed: %d\n", ft_putnbr(test));
	return (0);
} */