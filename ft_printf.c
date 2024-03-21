/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmunoz-c <bmunoz-c@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 18:44:27 by bmunoz-c          #+#    #+#             */
/*   Updated: 2024/02/19 16:03:06 by bmunoz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

//Check if its alpha,num,unsigned int,hexad[16]+,hexad[16]-,ptr(0x).Ret len.
int	ft_format_check(const char format, va_list param)
{
	int	len;

	len = 0;
	if (format == 'c')
		len = ft_putchar(va_arg(param, int));
	else if (format == 's')
		len = ft_putstr(va_arg(param, char *));
	else if (format == 'p')
		len = ft_puthex(va_arg(param, unsigned long), "0123456789abcdef", 1);
	else if (format == 'd' || format == 'i')
		len = ft_putnbr(va_arg(param, int));
	else if (format == 'u')
		len = ft_putnbr(va_arg(param, unsigned int));
	else if (format == 'x')
		len = ft_puthex(va_arg(param, unsigned int), "0123456789abcdef", 0);
	else if (format == 'X')
		len = ft_puthex(va_arg(param, unsigned int), "0123456789ABCDEF", 0);
	else if (format == '%')
		len = ft_putchar('%');
	if (len == -1)
		return (-1);
	return (len);
}

//Main function.
int	ft_printf(const char *str, ...)
{
	int		i;
	int		len;
	int		total;
	va_list	param;

	i = 0;
	len = 0;
	total = 0;
	va_start(param, str);
	while (str[i] != '\0')
	{
		if (str[i] == '%')
			len = ft_format_check(str[++i], param);
		else
			len = write (1, &str[i], 1);
		if (len == -1)
			return (-1);
		total += len;
		i++;
	}
	va_end(param);
	return (total);
}
/*
int	main(void)
{
	printf(" | Len: %d\n", ft_printf("Char: %c, %c, %c", 'B', '&', 'b'));
	printf(" | Len: %d\n", ft_printf("String: %s", "~#-!Hola mundo!-#~"));
	printf(" | Len: %d\n", ft_printf("Number: %d, %d, %d", 42, -42, 0,42));
	printf(" | Len: %d\n", ft_printf("Direccion: %p, %p, %p", 123, 0, -123));
	printf(" | Len: %d\n", ft_printf("Hex min: %x, %x, %x", 123, 0, -123));
	printf(" | Len: %d\n", ft_printf("Hex mayus: %X, %X, %X", 123, 0, -123));
	printf(" | Len: %d\n", ft_printf("Unsigned %u, %u, %u", 123, 0, -123));
	printf(" | Len: %d\n", ft_printf("Porcentaje: %%"));
	return (0);
}
*/
