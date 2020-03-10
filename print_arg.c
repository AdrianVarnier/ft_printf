/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_arg.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avarnier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/10 15:15:26 by avarnier          #+#    #+#             */
/*   Updated: 2020/03/10 17:13:58 by avarnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_arg(va_list va, t_list *param)
{
	if (param->type == 's')
		return (ft_putstr_fd(va_arg(va, char *), 1));
	if (param->type == 'c')
		return (ft_putchar_fd(va_arg(va, int), 1));
	if (param->type == 'i' || param->type == 'd')
		return (ft_putnbr_fd(va_arg(va, int), 1));
	if (param->type == 'u')
		return (ft_putuns_fd(va_arg(va, unsigned int), 1));
	if (param->type == 'x')
		return (ft_puthex_fd(va_arg(va, int), 1, "0123456789abcdef"));
	if (param->type == 'X')
		return (ft_puthex_fd(va_arg(va, int), 1, "0123456789ABCDEF"));
	if (param->type == 'p')
	{
		ft_putstr_fd("0x", 1);
		return (2 + ft_puthex_fd(va_arg(va, unsigned long), 1, "0123456789abcdef"));
	}
	return (0);
}
