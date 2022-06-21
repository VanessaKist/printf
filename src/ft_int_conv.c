/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_int_conv.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 22:20:01 by coder             #+#    #+#             */
/*   Updated: 2022/06/19 16:52:55 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

int	ft_int_conv(int len, va_list arg)
{
	long int	i;

	i = va_arg(arg, int);
	if (i < 0)
	{
		write(1, "-", 1);
		len++;
		i = i * -1;
	}
	ft_putbase(i, "0123456789");
	len = len + ft_intlen(i, 10);
	return (len);
}
