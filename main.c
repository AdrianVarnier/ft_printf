/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avarnier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/09 15:45:15 by avarnier          #+#    #+#             */
/*   Updated: 2020/03/09 17:19:26 by avarnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

void	get(const char *s, ...)
{
	t_list *param;
	va_list va;

	va_start(va, s);
	param = get_param(va, s);
	printf("%c\n", param->flag);
	printf("%d\n", param->width);
	printf("%d\n", param->pre);
	printf("%c\n", param->type);
	va_end(va);
}
int main()
{
	char	s[20] = "%15d";

	get(s, 8);
	return (0);
}
