/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convertion.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 22:09:54 by coder             #+#    #+#             */
/*   Updated: 2022/06/16 22:32:59 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "inc/ft_printf.h"

int ft_convertion(const char *str, int len, va_list arg)
{
	if (*str == 'd' || *str == 'i')	
		len = ft_int_conv(len, arg);
	else if (*str == 'c' || *str == '%')	
		len = ft_char_conv(str, len, arg);
	else if (*str == 's')
		len = ft_str_conv(len, arg);
	else if (*str == 'u'|| *str == 'x' || *str == 'X')
		len = ft_unsg_conv(str, len, arg);
	else if (*str == 'p')
		len = ft_ptr_conv(len, arg);		
	return (len);	
}
