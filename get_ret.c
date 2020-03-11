/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_ret.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avarnier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/11 12:07:20 by avarnier          #+#    #+#             */
/*   Updated: 2020/03/11 12:22:04 by avarnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	get_ret(const char *s)
{
	int i;
	int	count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if (s[i] == '%' && s[i + 1] == '%')
		{
			i++;
			count++;
		}
		else if (s[i] == '%')
		{
			i++;
			while (ft_isalpha(s[i]) == 0 && s[i] != '%')
				i++;
		}
		else
			count++;
		i++;
	}
	return (count);
}
