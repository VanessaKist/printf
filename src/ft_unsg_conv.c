/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsg_conv.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 16:48:31 by coder             #+#    #+#             */
/*   Updated: 2022/06/19 16:53:43 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

int	ft_unsg_conv(const char *str, int len, va_list arg)
{
	unsigned int	u;

	if (*str == 'u')
	{
		u = va_arg(arg, unsigned int);
		ft_putbase(u, "0123456789");
		len = len + ft_intlen(u, 10);
	}	
	else if (*str == 'x')
	{
		u = va_arg(arg, unsigned int);
		ft_putbase(u, "0123456789abcdef");
		len = len + ft_intlen(u, 16);
	}
	else if (*str == 'X')
	{
		u = va_arg(arg, unsigned int);
		ft_putbase(u, "0123456789ABCDEF");
		len = len + ft_intlen(u, 16);
	}
	return (len);
}
