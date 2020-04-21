/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nbrlen.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avarnier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/11 10:23:39 by avarnier          #+#    #+#             */
/*   Updated: 2020/03/12 13:55:36 by avarnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	nbrlen(int n, t_list *param)
{
	int	count;

	count = 0;
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

int	unslen(unsigned int n)
{
	int count;

	count = 0;
	if (n == 0)
		return (1);
	while (n > 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

int	hexlen(unsigned int n)
{
	int count;

	count = 0;
	if (n == 0)
		return (1);
	while (n > 0)
	{
		n = n / 16;
		count++;
	}
	return (count);
}

int	adrlen(unsigned long n)
{
	int count;

	count = 0;
	if (n == 0)
		return (5);
	if (n == 0)
		return (1);
	while (n > 0)
	{
		n = n / 16;
		count++;
	}
	return (count);
}
