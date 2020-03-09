/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avarnier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/09 15:45:15 by avarnier          #+#    #+#             */
/*   Updated: 2020/03/09 17:51:17 by avarnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

void	get(const char *s, ...)
{
	t_list param;
	va_list va;

	va_start(va, s);
	get_param(va, s, &param);
	printf("%c\n", param.flag);
	printf("%d\n", param.width);
	printf("%d\n", param.pre);
	printf("%c\n", param.type);
	printf("test");
	va_end(va);
}
int main()
{
	char	s[20] = "%*d";

	get(s, 5);
	return (0);
}
