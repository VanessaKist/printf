/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 22:02:05 by coder             #+#    #+#             */
/*   Updated: 2022/06/09 17:55:33 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

void	ft_putnbr_fd(int n, int fd);
void	ft_putchar_fd(char c, int fd);
size_t	ft_strlen(const char *s);
void	ft_putstr(const char *str);
int		ft_int_conv(int len, va_list arg);
int		ft_printf(const char *str, ...);
int		ft_char_conv(int len, va_list arg);
int		ft_str_conv(int len, va_list arg);

#endif