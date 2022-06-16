/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_char_conv.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 22:34:38 by coder             #+#    #+#             */
/*   Updated: 2022/06/15 03:07:18 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/ft_printf.h"

void	ft_putbase(unsigned long num, char *base);
int		ft_intlen(unsigned long i, int base);

int	ft_char_conv(const char *str, int len, va_list arg)
{
	long int i;
	
	if (*str == '%')
	{
		write(1, "%", 1);
		len++;
	}
	else
	{
		i = va_arg(arg, int);
		write(1, &i, 1);
		len++;
	}
	return (len);
}
