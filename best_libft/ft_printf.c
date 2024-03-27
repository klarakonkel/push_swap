/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkonkel <kkonkel@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 10:11:45 by kkonkel           #+#    #+#             */
/*   Updated: 2024/01/11 16:51:12 by kkonkel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	format_check(va_list args, const char format);
char		*ft_strchr(const char *s, int c);

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		length;

	i = 0;
	length = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%' && ft_strchr("cspdiuxX%", format[i + 1]))
		{
			length += format_check(args, format[i + 1]);
			i++;
		}
		else
			length += ft_putchar(format[i]);
		i++;
	}
	va_end(args);
	return (length);
}

static int	format_check(va_list args, const char format_char)
{
	void	*ptr;

	if (format_char == 'c')
		return (ft_putchar(va_arg(args, int)));
	else if (format_char == 's')
		return (ft_putstr(va_arg(args, char *)));
	else if (format_char == 'i' || format_char == 'd')
		return (ft_itoa_fd(va_arg(args, long)));
	else if (format_char == 'X' || format_char == 'x')
		return (ft_puthexa(va_arg(args, unsigned int), format_char));
	else if (format_char == 'u')
		return (ft_putunsign(va_arg(args, unsigned int)));
	else if (format_char == '%')
		return (ft_putchar('%'));
	else if (format_char == 'p')
	{
		ptr = va_arg(args, void *);
		if (ptr)
			return (ft_putptraddress(ptr));
		return (ft_putstr("(nil)"));
	}
	else
		return (-1);
}
/*
int	main()
{
	void	*ptr = (void *)0xffffffff;
	//char
	printf("Chars written: %d\n", ft_printf("ft: %c\n", 'c'));
	printf("Chars written: %d\n", printf("test: %c\n", 'c'));
	//string
	printf("Chars written: %d\n", ft_printf("ft: %s\n","string"));
	printf("Chars written: %d\n", printf("test: %s\n", "string"));
	//int
	printf("Chars written: %d\n", ft_printf("ft: %d\n", INT32_MIN));
	printf("Chars written: %d\n", printf("test: %d\n", INT32_MIN));
	//long
	printf("Chars written: %d\n", ft_printf("ft: %i\n", INT32_MIN));
	printf("Chars written: %d\n", printf("test: %i\n", INT32_MIN));
	//hex
	printf("Chars written: %d\n", ft_printf("ft: %x\n", INT32_MAX));
	printf("Chars written: %d\n", printf("test: %x\n", INT32_MAX));
	//unsigned
	printf("Chars written: %d\n", ft_printf("ft: %u\n", INT32_MAX));
	printf("Chars written: %d\n", printf("test: %u\n", INT32_MAX));
	//%
	printf("Chars written: %d\n", ft_printf("ft: %%\n"));
	printf("Chars written: %d\n", printf("test: %%\n"));
	//ptr
	printf("Chars written: %d\n", ft_printf("ft: %p\n", ptr));
	printf("Chars written: %d\n", printf("test: %p\n", ptr));
	return (0);
}*/