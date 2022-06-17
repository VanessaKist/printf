/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 01:11:07 by coder             #+#    #+#             */
/*   Updated: 2022/06/17 20:57:45 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/ft_printf.h"

int	ft_intlen(unsigned long i, int base)
{
	int	cont;

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
