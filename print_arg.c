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
		return (ft_putnbr_fd(va_arg(va, int), 1));
	if (param->type == 'u')
		return (ft_putuns_fd(va_arg(va, unsigned int), 1));
	if (param->type == 'x')
		return (ft_puthex_fd(va_arg(va, int), 1, "0123456789abcdef"));
	if (param->type == 'X')
		return (ft_puthex_fd(va_arg(va, int), 1, "0123456789ABCDEF"));
	if (param->type == 'p')
	{
		ft_putstr_fd("0x", 1, 0, 0);
		return (2 + ft_puthex_fd(va_arg(va, unsigned long),
		1, "0123456789abcdef"));
	}
	return (0);
}

int	print_pre(t_list *param)
{
	int	x;
	int	count;

	if (param->type == 's')
		return (0);
	if (param->sign == '-')
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

int	print_wid(t_list *param)
{
	int		x;
	int		count;
	char	c;

	c = ' ';
	count = 0;
	if (param->sign == '-' && param->pre > param->len)
		param->pre++;
	if (param->flag == '-')
		return (0);
	if (param->flag == '0')
		c = '0';
	if (param->wid > param->pre && param->wid > param->len)
	{
		if (param->pre > param->len)
			x = param->wid - param->pre;
		if (param->len > param->pre)
			x = param->wid - param->len;
		while (x > 0)
		{
			ft_putchar_fd(c, 1);
			count++;
			x--;
		}
	}
	return (count);
}

int	print_nwidth(t_list *param)
{
	int		x;
	int		count;

	count = 0;

	if (param->flag != '-')
		return (0);
	if (param->wid > param->pre && param->wid > param->len)
	{
		if (param->pre > param->len)
			x = param->wid - param->pre;
		if (param->len > param->pre)
			x = param->wid - param->len;
		while (x > 0)
		{
			ft_putchar_fd(' ', 1);
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
	ret = print_wid(param);
	ret = ret + print_pre(param);
	ret = ret + print_arg(va, param);
	ret = ret + print_nwidth(param);
	free(param);
	return (ret);
}
