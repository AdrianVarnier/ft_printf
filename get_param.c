/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_param.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avarnier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/09 15:28:44 by avarnier          #+#    #+#             */
/*   Updated: 2020/03/09 17:21:15 by avarnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		get_flag(const char *s, t_list *param)
{
	int	i;

	i = 0;
	param->flag = 0;
	while (s[i] == '0' || s[i] == '-')
	{
		if (s[i] == '0' && param->flag != '-')
			param->flag = '0';
		if (s[i] == '-')
			param->flag = '-';
		i++;
	}
	return (i);
}

int		get_width(va_list va, const char *s, t_list *param)
{
	int		i;

	i = 0;
	param->width = 0;
	if (s[i] == '*')
	{
		param->width = va_arg(va, int);
		if (param->width < 0)
		{
			param->width = param->width * -1;
			param->flag = '-';
		}
	}
	else if (ft_isdigit(s[i]) != 0)
		param->width = ft_atoi(s);
	while (s[i] == '*' || ft_isdigit(s[i]) != 0)
		i++;
	return (i);
}

int		get_pre(va_list va, const char *s, t_list *param)
{
	int i;

	i = 1;
	param->pre = 0;
	if (s[0] != '.')
		return (0);
	if (s[i] == '*')
		param->pre = va_arg(va, int);
	else if (ft_isdigit(s[i]) != 0)
		param->pre = ft_atoi(s + 1);
	while (s[i] == '*' || ft_isdigit(s[i]) != 0)
		i++;
	return (i);
}

t_list	*get_param(va_list va, const char *s)
{
	int		i;
	t_list	*param;

	i = 1;
	if (!(param = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	i = i + get_flag(s + i, param);
	i = i + get_width(va, s + i, param);
	i = i + get_pre(va, s + i, param);
	param->type = s[i];
	return (param);
}
