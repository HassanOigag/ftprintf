/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_long.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoigag <hoigag@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 12:23:30 by hoigag            #+#    #+#             */
/*   Updated: 2022/10/23 14:40:25 by hoigag           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthex_long(unsigned long n, int isupper, int *counter)
{
	char			*str_base;

	if (isupper)
		str_base = "0123456789ABCDEF";
	else
		str_base = "0123456789abcdef";
	if (n >= 0 && n < 16)
		ft_putchar(str_base[n], counter);
	else
	{
		ft_puthex_long(n / 16, isupper, counter);
		ft_puthex_long(n % 16, isupper, counter);
	}
}
