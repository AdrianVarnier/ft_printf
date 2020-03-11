/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avarnier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/09 18:02:52 by avarnier          #+#    #+#             */
/*   Updated: 2020/03/11 14:57:58 by avarnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_all(va_list va, const char *s)
{
	int i;
	int ret;

	i = 0;
	ret = 0;
	while (s[i] != '\0')
	{
		if (s[i] == '%' && s[i + 1] == '%')
		{
			i++;
			ft_putchar_fd('%', 1);
		}
		else if (s[i] == '%')
		{
			ret = ret + print(va, s + i);
			i++;
			while (ft_isalpha(s[i]) == 0 && s[i] != '%')
				i++;
		}
		else
			ft_putchar_fd(s[i], 1);
		i++;
	}
	return (ret);
}

int	ft_printf(const char *s, ...)
{
	va_list va;
	int		ret;
	
	va_start(va, s);
	ret = print_all(va, s);
	va_end(va);
	return (ret + get_ret(s));
}
