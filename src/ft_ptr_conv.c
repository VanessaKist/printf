/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ptr_conv.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 17:29:30 by coder             #+#    #+#             */
/*   Updated: 2022/06/19 16:53:13 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

int	ft_ptr_conv(int len, va_list arg)
{
	unsigned long	p;
	char			*s;

	p = va_arg(arg, unsigned long);
	if (!p)
	{
		s = "(nil)";
		write(1, s, ft_strlen(s));
		len = len + ft_strlen(s);
	}
	else
	{
		write(1, "0x", 2);
		ft_putbase(p, "0123456789abcdef");
		len = len + ft_intlen(p, 16) + 2;
	}
	return (len);
}
