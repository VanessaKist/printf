/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 22:02:05 by coder             #+#    #+#             */
/*   Updated: 2022/06/16 22:31:00 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

void	ft_putchar_fd(char c, int fd);
void	ft_putbase(unsigned long num, char *base);
size_t	ft_strlen(const char *s);
int		ft_int_conv(int len, va_list arg);
int		ft_printf(const char *str, ...);
int		ft_convertion(const char *str, int len, va_list arg);
int 	ft_char_conv(const char *str, int len, va_list arg);
int		ft_str_conv(int len, va_list arg);
int		ft_unsg_conv(const char *str, int len, va_list arg);
int		ft_ptr_conv(int len, va_list arg);

#endif