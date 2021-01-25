/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avarnier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/10 15:20:13 by avarnier          #+#    #+#             */
/*   Updated: 2021/01/25 12:04:48 by avarnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_fd(int n, int fd, t_list *param)
{
	int				i;
	unsigned int	nb;

	i = 0;
	if (n == 0 && param->p == 1 && param->pre == 0)
		return (0);
	if (n < 0)
	{
		nb = -n;
		i++;
	}
	else
		nb = n;
	if (nb >= 10)
		i = i + ft_putnbr_fd(nb / 10, fd, param);
	ft_putchar_fd(nb % 10 + 48, fd);
	i++;
	return (i);
}

int	ft_putadr_fd(unsigned long n, int fd, char *base, t_list *param)
{
	int				i;

	i = 0;
	if (n == 0 && param->p == 1 && param->pre == 0)
		return (0);
	if (n >= 16)
		i = i + ft_putadr_fd(n / 16, fd, base, param);
	ft_putchar_fd(base[n % 16], fd);
	i++;
	return (i);
}

int	ft_puthex_fd(unsigned int n, int fd, char *base, t_list *param)
{
	int				i;

	i = 0;
	if (n == 0 && param->p == 1 && param->pre == 0)
		return (0);
	if (n >= 16)
		i = i + ft_puthex_fd(n / 16, fd, base, param);
	ft_putchar_fd(base[n % 16], fd);
	i++;
	return (i);
}

int	ft_putuns_fd(unsigned int n, int fd, t_list *param)
{
	int				i;

	i = 0;
	if (n == 0 && param->p == 1 && param->pre == 0)
		return (0);
	if (n >= 10)
		i = i + ft_putuns_fd(n / 10, fd, param);
	ft_putchar_fd(n % 10 + 48, fd);
	i++;
	return (i);
}
