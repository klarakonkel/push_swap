/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptraddress.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkonkel <kkonkel@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 12:22:06 by kkonkel           #+#    #+#             */
/*   Updated: 2024/01/10 12:22:06 by kkonkel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putptraddress(void *inhexa)
{
	unsigned long	nr;
	int				len;

	nr = (unsigned long)inhexa;
	len = ft_putstr("0x");
	len += ft_puthexa(nr, 'x');
	return (len);
}
/*
int	main() 
{
	printf("%d", 2);
	void	*ptr = (void *)0xffffffff;
	int	len = ft_putptraddress(ptr);
	printf("Chars to be printed: %d\n", len);
	return (0);
} */