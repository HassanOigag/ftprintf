/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoigag <hoigag@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 14:38:38 by hoigag            #+#    #+#             */
/*   Updated: 2022/10/24 11:59:06 by hoigag           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_print_format(va_list ap, char c, int *counter)
{
	if (c == '%')
		ft_putchar(c, counter);
	else if (c == 'c')
		ft_putchar(va_arg(ap, int), counter);
	else if (c == 's')
		ft_putstr(va_arg(ap, char *), counter);
	else if (c == 'd' || c == 'i')
		ft_putnbr(va_arg(ap, int), counter);
	else if (c == 'x')
		ft_puthex(va_arg(ap, unsigned int), 0, counter);
	else if (c == 'X')
		ft_puthex(va_arg(ap, unsigned int), 1, counter);
	else if (c == 'u')
		ft_putunbr(va_arg(ap, unsigned int), counter);
	else if (c == 'p')
	{
		ft_putstr("0x", counter);
		ft_puthex_long(va_arg(ap, unsigned long), 0, counter);
	}
	else
		ft_putchar(c, counter);
}

int	ft_printf(const char *s, ...)
{
	int		counter;
	int		i;
	va_list	ap;

	counter = 0;
	i = 0;
	va_start(ap, s);
	while (s[i])
	{
		if (s[i] == '%')
		{
			i++;
			if (s[i])
				ft_print_format(ap, s[i], &counter);
			else
				break ;
		}
		else
			ft_putchar(s[i], &counter);
		i++;
	}
	va_end(ap);
	return (counter);
}
