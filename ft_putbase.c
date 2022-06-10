/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putbase.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 19:27:13 by coder             #+#    #+#             */
/*   Updated: 2022/06/09 20:33:16 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <unistd.h>

size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (s[len])
		len ++;
	return (len);
}

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

void	ft_putbase(unsigned long num, char *base)
{
	size_t	len_base;

	len_base = ft_strlen(base);
	if (num / len_base > 0)
		ft_putbase(num / len_base, base);
	ft_putchar_fd(base[num % len_base], 1);
}

/* #include <stdio.h>
int main(void)
{
	ft_putbase(455262, "0123456789abcdfe");
	printf("\n%x\n", 455262);
	return (0);
} */