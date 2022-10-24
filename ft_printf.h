/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoigag <hoigag@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 14:34:06 by hoigag            #+#    #+#             */
/*   Updated: 2022/10/23 13:16:35 by hoigag           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>
# include <limits.h>

unsigned int		ft_strlen(const char *s);
void				ft_putchar(const char c, int *counter);
void				ft_putstr(const char *s, int *counter);
void				ft_putnbr(int nb, int *counter);
int					ft_printf(const char *s, ...);
void				ft_puthex(unsigned int n, int isupper, int *counter);
void				ft_puthex_long(unsigned long n, int isupper, int *counter);
void				ft_putunbr(unsigned int n, int *counter);
#endif
