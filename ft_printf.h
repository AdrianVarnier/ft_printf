/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avarnier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/09 15:24:07 by avarnier          #+#    #+#             */
/*   Updated: 2020/03/10 17:05:14 by avarnier         ###   ########.fr       */
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

int				ft_printf(const char *s, ...);
void			get_param(va_list va, const char *s, t_list *param);
int				print_arg(va_list va, t_list *param);
int				ft_isdigit(int c);
int				ft_atoi(const char *s);
int				ft_putchar_fd(char c, int fd);
int				ft_isalpha(int c);
int				ft_strlen(const char *s);
int				ft_putstr_fd(char *s, int fd);
int				ft_putnbr_fd(int n, int fd);
int				ft_puthex_fd(unsigned long n, int fd, char *base);
int				ft_putuns_fd(unsigned int n, int fd);

#endif
