/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avarnier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/09 15:24:07 by avarnier          #+#    #+#             */
/*   Updated: 2020/03/09 16:35:02 by avarnier         ###   ########.fr       */
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
	struct s_list	*next;
}				t_list;

t_list			*get_param(va_list va, const char *s);
int				ft_isdigit(int c);
int				ft_atoi(const char *s);

#endif