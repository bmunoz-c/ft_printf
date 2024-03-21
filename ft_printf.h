/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmunoz-c <bmunoz-c@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 18:45:01 by bmunoz-c          #+#    #+#             */
/*   Updated: 2024/02/15 18:45:56 by bmunoz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

int		ft_printf(char const *str, ...);
int		ft_putchar(char c);
int		ft_putstr(char *str);
long	ft_putnbr(long nb);
long	ft_puthex(unsigned long nb, char *base, int isptr);

#endif
