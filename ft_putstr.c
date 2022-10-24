/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoigag <hoigag@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 14:48:34 by hoigag            #+#    #+#             */
/*   Updated: 2022/10/23 14:43:09 by hoigag           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr(const char *s, int *counter)
{
	int	strlen;

	if (!s)
		s = "(null)";
	strlen = ft_strlen(s);
	write(1, s, strlen);
	*counter += strlen;
}
