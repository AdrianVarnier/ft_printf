/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_ret.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avarnier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/11 12:07:20 by avarnier          #+#    #+#             */
/*   Updated: 2020/04/24 11:06:57 by arcadia          ###   ########.fr       */
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
		if (s[i] == '%')
		{
			i++;
			while (ft_isalpha(s[i]) == 0 && s[i] != '%')
				i++;
			if (s[i] == '%')
				count++;
		}
		else
			count++;
		i++;
	}
	return (count);
}
