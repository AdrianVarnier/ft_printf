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

int	ft_putstr_fd(char *s, int fd, int max)
{
	int	i;

	if (s == NULL)
	{
		ft_putstr_fd("(null)", 1, 6);
		return (6);
	}
	i = ft_strlen(s);
	if (ft_strlen(s) > max && max != 0)
		i = max;
	write(fd, s, i);
	return (i);
}
