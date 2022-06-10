/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_int_conv.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 22:20:01 by coder             #+#    #+#             */
/*   Updated: 2022/06/09 18:03:01 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Conversao de int

void	ft_putnbr_fd(int n, int fd);

int ft_int_conv(int len, va_list arg)
{
	long int i;
	
	i = va_arg(arg, int);
	ft_putnbr_fd(i, 1);
	len = len + ft_intlen(i);
	return (len);
}

