/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nbrlen.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avarnier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/11 10:23:39 by avarnier          #+#    #+#             */
/*   Updated: 2020/05/18 18:48:20 by avarnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	nbrlen(int n, t_list *param)
{
	int	count;

	count = 0;
	if (param->p == 1 && param->pre == 0 && n == 0)
		return (0);
	if (n == 0)
		return (1);
	if (n < 0)
	{
		param->sign = '-';
		n = n * -1;
	}
	while (n > 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

int	unslen(unsigned int n, t_list *param)
{
	int count;

	count = 0;
	if (param->p == 1 && param->pre == 0 && n == 0)
		return (0);
	if (n == 0)
		return (1);
	while (n > 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

int	hexlen(unsigned int n, t_list *param)
{
	int count;

	count = 0;
	if (param->p == 1 && param->pre == 0 && n == 0)
		return (0);
	if (n == 0)
		return (1);
	while (n > 0)
	{
		n = n / 16;
		count++;
	}
	return (count);
}

int	adrlen(unsigned long n, t_list *param)
{
	int count;

	count = 0;
	if (n == 0 && ((param->pre != 0 && param->p == 1) || param->p == 0))
		count++;
	while (n > 0)
	{
		n = n / 16;
		count++;
	}
	return (count + 2);
}
