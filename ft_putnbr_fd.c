/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avarnier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/10 15:20:13 by avarnier          #+#    #+#             */
/*   Updated: 2020/03/10 16:01:11 by avarnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_fd(int n, int fd)
{
	int				i;
	unsigned int	nb;

	i = 0;
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		nb = -n;
		i++;
	}
	else
		nb = n;
	if (nb >= 10)
		i = i + ft_putnbr_fd(nb / 10, fd);
	ft_putchar_fd(nb % 10 + 48, fd);
	i++;
	return (i);
}

int	ft_puthex_fd(unsigned long n, int fd, char *base)
{
	int				i;
	unsigned long	nb;

	i = 0;
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		nb = -n;
		i++;
	}
	else
		nb = n;
	if (nb >= 16)
		i = i + ft_puthex_fd(nb / 16, fd, base);
	ft_putchar_fd(base[nb % 16], fd);
	i++;
	return (i);
}

int	ft_putuns_fd(unsigned int n, int fd)
{
	int				i;

	i = 0;
	if (n >= 10)
		i = i + ft_putuns_fd(n / 10, fd);
	ft_putchar_fd(n % 10 + 48, fd);
	i++;
	return (i);
}
