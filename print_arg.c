/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_arg.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avarnier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/10 15:15:26 by avarnier          #+#    #+#             */
/*   Updated: 2020/03/12 16:24:46 by avarnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_arg(va_list va, t_list *param)
{
	if (param->type == 's')
		return (ft_putstr_fd(va_arg(va, char *), 1, param->pre, param->p));
	if (param->type == 'c')
		return (ft_putchar_fd(va_arg(va, int), 1));
	if (param->type == 'i' || param->type == 'd')
		return (ft_putnbr_fd(va_arg(va, int), 1, param));
	if (param->type == 'u')
		return (ft_putuns_fd(va_arg(va, unsigned int), 1, param));
	if (param->type == 'x')
		return (ft_puthex_fd(va_arg(va, int), 1, "0123456789abcdef", param));
	if (param->type == 'X')
		return (ft_puthex_fd(va_arg(va, int), 1, "0123456789ABCDEF", param));
	if (param->type == 'p')
	{
		return (ft_puthex_fd(va_arg(va, unsigned long),
		1, "0123456789abcdef", param));
	}
	return (0);
}

int	print_pre(t_list *param)
{
	int	x;
	int	count;

	if (param->type == 's')
		return (0);
	if (param->sign == '-' && param->flag == '-')
		ft_putchar_fd('-', 1);
	count = 0;
	if (param->pre > param->len)
	{
		x = param->pre - param->len;
		while (x > 0)
		{	
			ft_putchar_fd('0', 1);
			count++;
			x--;
		}
	}
	return (count);
}

int	print(va_list va, const char *s)
{
	t_list	*param;
	int		ret;

	param = get_param(va, s);
	get_len(va, param);
	if (param->type == 's')
	{
		ret = print_swid(param);
		ret = ret + print_arg(va, param);
		ret = ret + print_snegwidth(param);
	}
	else
	{
		ret = print_numwid(param);
		ret = ret + print_negnumwid(param);
		ret = ret + print_pre(param);
		ret = ret + print_arg(va, param);
		ret = ret + print_numnegwidth(param);
		ret = ret + print_negnum_negwidth(param);
	}
	free(param);
	return (ret);
}
