/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmunoz-c <bmunoz-c@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 19:08:20 by bmunoz-c          #+#    #+#             */
/*   Updated: 2024/02/15 20:14:10 by bmunoz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

//Print alpha. Return len.
int	ft_putchar(char c)
{
	if (write(1, &c, 1) == -1)
		return (-1);
	return (1);
}

//Print str. Return len.
int	ft_putstr(char *str)
{
	int	i;

	i = 0;
	if (!str)
	{
		str = "(null)";
	}
	while (str[i] != '\0')
	{
		if (write (1, &str[i], 1) == -1)
			return (-1);
		i++;
	}
	return (i);
}

//Print number. Return len.
long	ft_putnbr(long nb)
{
	int		len;
	int		check;

	len = 0;
	if (nb < 0)
	{
		if (ft_putchar('-') == -1)
			return (-1);
		len++;
		nb = -nb;
	}
	if (nb > 9)
	{
		check = ft_putnbr(nb / 10);
		if (check == -1 || ft_putchar((nb % 10) + 48) == -1)
			return (-1);
		len += check + 1;
	}
	else
	{
		if (ft_putchar(nb + 48) == -1)
			return (-1);
		len++;
	}
	return (len);
}

//Check hex with base[16] && put 0x if its pointer. Return len
long	ft_puthex(unsigned long nb, char *base, int isptr)
{
	int	len;
	int	check;

	len = 0;
	if (isptr == 1)
	{
		if (ft_putstr("0x") == -1)
			return (-1);
		len += 2;
	}
	if (nb > 15)
	{
		check = ft_puthex(nb / 16, base, 0);
		if (check == -1 || ft_putchar(base[(nb % 16)]) == -1)
			return (-1);
		len += check + 1;
	}
	else
	{
		if (ft_putchar(base[nb]) == -1)
			return (-1);
		len++;
	}
	return (len);
}
