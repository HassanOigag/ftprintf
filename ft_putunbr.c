/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoigag <hoigag@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 20:01:35 by hoigag            #+#    #+#             */
/*   Updated: 2022/10/22 21:13:42 by hoigag           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putunbr(unsigned int nb, int *counter)
{
	if (nb > 9)
	{
		ft_putnbr(nb / 10, counter);
		ft_putnbr(nb % 10, counter);
	}
	else
		ft_putchar(nb + 48, counter);
}
