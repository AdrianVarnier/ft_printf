/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_len.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avarnier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/11 10:17:50 by avarnier          #+#    #+#             */
/*   Updated: 2020/03/11 10:59:18 by avarnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	get_len(va_list va, t_list *param)
{
	va_list	cpy;

	param->len = 0;
	va_copy(cpy, va);
	if (param->type == 's')
		param->len = ft_strlen(va_arg(cpy, char *));
	if (param->type == 'c')
		param->len = 1;
	if (param->type == 'i' || param->type == 'd')
		param->len = nbrlen(va_arg(cpy, int));
	if (param->type == 'u')
		param->len = unslen(va_arg(cpy, unsigned int));
	if (param->type == 'x' || param->type == 'X')
		param->len = hexlen(va_arg(cpy, int));
	if (param->type == 'p')
		param->len = 14;
	va_end(cpy);
}
