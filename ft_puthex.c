/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoigag <hoigag@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 18:02:49 by hoigag            #+#    #+#             */
/*   Updated: 2022/10/23 12:22:55 by hoigag           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthex(unsigned int n, int isupper, int *counter)
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
		ft_puthex(n / 16, isupper, counter);
		ft_puthex(n % 16, isupper, counter);
	}
}
