/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_conv.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 22:58:22 by coder             #+#    #+#             */
/*   Updated: 2022/06/19 16:53:31 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

int	ft_str_conv(int len, va_list arg)
{
	char	*s;

	s = va_arg(arg, char *);
	if (!s)
		s = "(null)";
	write(1, s, ft_strlen(s));
	len = len + ft_strlen(s);
	return (len);
}
