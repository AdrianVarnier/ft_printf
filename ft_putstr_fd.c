/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avarnier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/10 15:11:41 by avarnier          #+#    #+#             */
/*   Updated: 2020/03/12 16:57:11 by avarnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr_fd(char *s, int fd, int max, int p)
{
	int	i;

	if (s == NULL && param->p == 0)
	{
		ft_putstr_fd("(null)", 1, 0, 0);
		return (6);
	}
	if (s == NULL && param->p == 1)
		return (0);
	i = ft_strlen(s);
	if (ft_strlen(s) > max && p == 1)
		i = max;
	write(fd, s, i);
	return (i);
}
