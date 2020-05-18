/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avarnier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/10 15:11:41 by avarnier          #+#    #+#             */
/*   Updated: 2020/05/18 15:03:43 by avarnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr_fd(char *s, int fd, int max, int p)
{
	int	i;

	if (s == NULL)
		return (ft_putstr_fd("(null)", 1, max, p));
	i = ft_strlen(s);
	if (ft_strlen(s) > max && p == 1)
		i = max;
	write(fd, s, i);
	return (i);
}
