/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avarnier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/09 15:24:07 by avarnier          #+#    #+#             */
/*   Updated: 2020/03/09 17:43:12 by avarnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct	s_list
{
	int				width;
	int				pre;
	char			flag;
	char			type;
}				t_list;

void			get_param(va_list va, const char *s, t_list *param);
int				ft_isdigit(int c);
int				ft_atoi(const char *s);

#endif
