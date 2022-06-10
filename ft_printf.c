/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 15:51:06 by coder             #+#    #+#             */
/*   Updated: 2022/06/10 20:13:18 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "inc/ft_printf.h"
# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>

void	ft_putnbr_fd(int n, int fd);
void	ft_putchar_fd(char c, int fd);
size_t	ft_strlen(const char *s);
/* int		ft_int_conv(int len, va_list arg);
int		ft_char_conv(int len, va_list arg);
int		ft_str_conv(int len, va_list arg); */

void	ft_putbase(unsigned long num, char *base)
{
	size_t	len_base;

	len_base = ft_strlen(base);
	if (num / len_base > 0)
		ft_putbase(num / len_base, base);
	ft_putchar_fd(base[num % len_base], 1);
}

int	ft_intlen(unsigned long i, int base)
{
	int cont;
	
	cont = 0;
	
	if (i == 0)
		return (1);
	while (i > 0)
	{
		i = i / base;
		cont++;
	}
	return (cont);
}

int	ft_printf(const char *str, ...)
{
	int len;
	long int i;
	char *s;
	unsigned int	u;
	
	va_list arg;
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
			if (*str == 'd' || *str == 'i')
			{
				//ft_int_conv(len, arg);
				i = va_arg(arg, int);
				if (i < 0)
				{
					write(1, "-", 1);
					len++;
					i = i * -1;
				}
				ft_putnbr_fd(i, 1);
				len = len + ft_intlen(i, 10);
			}
			else if (*str == 'c' || *str == '%')
			{	
				//ft_char_conv(len, arg);
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
			}	
			else if (*str == 's')
			{
				//ft_str_conv(len, arg);
				s = va_arg(arg, char *);
				if (!s)
					s = "(null)";
				write(1, s, ft_strlen(s));
				len = len + ft_strlen(s);
			}
			else if (*str == 'u')
			{
				//ft_unsg_conv(len, arg); 
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
			/* else if (*str == 'p')
			{
				s = va_arg(arg, unsigned int);
				
			} */
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
	i = ft_printf("Hello %d", -12);
	d = printf("Hello %d", -12);
	printf("ft_printf:%i\norig_printf:%i\n", i, d);
	return (0);
}   */
