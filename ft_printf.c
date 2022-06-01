/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 15:51:06 by coder             #+#    #+#             */
/*   Updated: 2022/04/25 22:28:20 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>

void	ft_putnbr_fd(int n, int fd);
void	ft_putchar_fd(char c, int fd);

int	ft_intlen(int i)
{
	int cont;

	cont = 0;
	while (i)
	{
		i = i / 10;
		cont++;
	}
	return (cont);
}

int	ft_printf(const char *str, ...)
{
	int len;
	int i;

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
			if (i == 'd')
			{
				i = va_arg(arg, int);
				ft_putnbr_fd(i, 1);
				len = len + ft_intlen(i);
			}
		}	
		str++;
	}
	va_end(arg);
	return (len);
}

int main (void)
{
	int i;
	int d;
	i = ft_printf("Hello %d\n", 44);
	d = printf("Hello %d\n", 44);
	printf("ft_printf:%i\nog_printf:%i\n", i, d);
	return (0);
}