/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avarnier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/09 18:02:52 by avarnier          #+#    #+#             */
/*   Updated: 2020/03/10 17:08:43 by avarnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"


int	ft_printf(const char *s, ...)
{
	va_list va;
	t_list	*param;

	va_start(va, s);
	get_param(va, s, param);
	va_end(va);
	return (1);
}
