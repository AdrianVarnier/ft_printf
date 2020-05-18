/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_negnumwidth.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avarnier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/23 18:46:18 by avarnier          #+#    #+#             */
/*   Updated: 2020/05/18 15:38:06 by avarnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	put_sign1(t_list *param)
{
	if (param->sign == '-' && param->flag == '0')
		ft_putchar_fd('-', 1);
}

static void	put_sign2(t_list *param)
{
	if (param->sign == '-' && param->flag != '0')
		ft_putchar_fd('-', 1);
}

static int	flag(t_list *param)
{
	if (param->flag == '0')
		return ('0');
	return (' ');
}

int			print_negnumwid(t_list *param)
{
	int		x;
	int		count;
	char	c;

	c = flag(param);
	count = 0;
	put_sign1(param);
	if (param->flag == '-' || param->sign != '-')
		return (0);
	if (param->wid > param->pre && param->wid > param->len)
	{
		if (param->pre > param->len)
			x = param->wid - param->pre - 1;
		else
			x = param->wid - param->len - 1;
		while (x > 0)
		{
			ft_putchar_fd(c, 1);
			count++;
			x--;
		}
	}
	put_sign2(param);
	return (count);
}

int			print_negnum_negwidth(t_list *param)
{
	int	x;
	int	count;

	count = 0;
	if (param->flag != '-' || param->sign != '-')
		return (0);
	if (param->wid > param->pre && param->wid > param->len)
	{
		if (param->pre > param->len)
			x = param->wid - param->pre - 1;
		else
			x = param->wid - param->len - 1;
		while (x > 0)
		{
			ft_putchar_fd(' ', 1);
			count++;
			x--;
		}
	}
	return (count);
}
