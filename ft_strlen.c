/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avarnier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/10 15:08:12 by avarnier          #+#    #+#             */
/*   Updated: 2020/03/12 16:57:26 by avarnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_strlen(const char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

int     ft_strlen_param(const char *s, t_list *param)
{
	int i;

	if (s == NULL)
	{
		param->s = 0;
		return (6);
	}
	param->s = 1;
	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}
