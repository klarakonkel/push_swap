/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkonkel <kkonkel@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 16:19:49 by kkonkel           #+#    #+#             */
/*   Updated: 2024/03/05 14:43:58 by kkonkel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	intlen(int n)
{
	unsigned int	count;

	count = 0;
	if (n < 0)
		count++;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}
char	*ft_itoa(int n)
{
	unsigned int	len;
	unsigned long	nbr;
	char			*converted;

	len = intlen(n);
	converted = (char *)malloc((len + 1) * sizeof(char));
	if (!converted)
		return (NULL);
	if (n < 0)
	{
		converted[0] = '-';
		nbr = -(long)n;
	}
	else
		nbr = n;
	if (nbr == 0)
		converted[0] = '0';
	converted[len] = '\0';
	while (nbr != 0)
	{
		converted[len - 1] = ((nbr % 10) + 48);
		nbr = nbr / 10;
		len--;
	}
	return (converted);
}

int	ft_itoa_fd(int nbr)
{
	char	*convertednbr;
	int		i;

	i = 0;
	convertednbr = ft_itoa(nbr);
	if (!convertednbr)
		return (-1);
	while (convertednbr[i] != '\0')
	{
		write (1, &convertednbr[i], 1);
		i++;
	}
	free(convertednbr);
	return (i);
}