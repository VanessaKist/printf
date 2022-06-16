/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 15:51:06 by coder             #+#    #+#             */
/*   Updated: 2022/06/16 22:38:21 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/ft_printf.h"
#include <stdio.h>

void	ft_putbase(unsigned long num, char *base);
int		ft_intlen(unsigned long i, int base);
void	ft_putchar_fd(char c, int fd);
size_t	ft_strlen(const char *s);
int		ft_convertion(const char *str, int len, va_list arg);
int		ft_int_conv(int len, va_list arg);
int		ft_char_conv(const char *str, int len, va_list arg);
int		ft_str_conv(int len, va_list arg);
int		ft_unsg_conv(const char *str, int len, va_list arg);
int		ft_ptr_conv(int len, va_list arg);

int	ft_printf(const char *str, ...)
{
	int		len;
	va_list	arg;

	va_start(arg, str);
	len = 0;
	while (*str)
	{
		if (*str != '%')
		{
			write(1, str, 1);
			len++;
		}
		else
		{
			str++;
			len = ft_convertion(str, len, arg);
		}
		str++;
	}
	va_end(arg);
	return (len);
}

/* int main (void)
{
	int i;
	int d;
	i = ft_printf("Hello %i\n", 44);
	d = printf("Hello %i\n", 44);
	printf("ft_printf:%i\norig_printf:%i\n", i, d);
	return (0);
} */
