/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_width.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avarnier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/23 18:48:26 by avarnier          #+#    #+#             */
/*   Updated: 2020/05/18 17:47:25 by avarnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	flag(t_list *param)
{
	if (param->flag == '0')
		return ('0');
	return (' ');
}

int			print_numwid(t_list *param)
{
	int		x;
	int		count;
	char	c;

	c = ' ';
	count = 0;
	if (param->flag == '-' || param->sign == '-')
		return (0);
	if (param->flag == '0' && param->p == 0)
		c = '0';
	if (param->wid > param->pre && param->wid > param->len)
	{
		if (param->pre > param->len)
			x = param->wid - param->pre;
		else
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

int			print_numnegwidth(t_list *param)
{
	int	x;
	int	count;

	count = 0;
	if (param->flag != '-' || param->sign == '-')
		return (0);
	if (param->wid > param->pre && param->wid > param->len)
	{
		if (param->pre > param->len)
			x = param->wid - param->pre;
		else
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

int			print_swid(t_list *param)
{
	int		x;
	int		count;
	char	c;

	c = flag(param);
	count = 0;
	if (param->flag == '-')
		return (0);
	if (param->wid > param->len)
	{
		if (param->pre > param->len || param->p == 0 || param->type == '%')
			x = param->wid - param->len;
		else if (param->p == 1 && param->s == 0)
			x = param->wid - param->len;
		else
			x = param->wid - param->pre;
		while (x > 0)
		{
			ft_putchar_fd(c, 1);
			count++;
			x--;
		}
	}
	return (count);
}

int			print_snegwidth(t_list *param)
{
	int	x;
	int	count;

	count = 0;
	if (param->flag != '-')
		return (0);
	if (param->wid > param->len)
	{
		if (param->pre > param->len || param->p == 0 || param->type == '%')
			x = param->wid - param->len;
		else if (param->p == 1 && param->s == 0)
			x = param->wid - param->len;
		else
			x = param->wid - param->pre;
		while (x > 0)
		{
			ft_putchar_fd(' ', 1);
			count++;
			x--;
		}
	}
	return (count);
}
