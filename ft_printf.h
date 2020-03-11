/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avarnier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/09 15:24:07 by avarnier          #+#    #+#             */
/*   Updated: 2020/03/11 14:59:52 by avarnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct	s_list
{
	int				wid;
	int				pre;
	int				len;
	char			flag;
	char			type;
}				t_list;

int				ft_printf(const char *s, ...);
t_list			*get_param(va_list va, const char *s);
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
int				hexlen(int n);
int				unslen(unsigned int n);
int				nbrlen(int n);
void			get_len(va_list va, t_list *param);
int				print_pre(t_list *param);
int				print_wid(t_list *param);
int				print_nwidth(t_list *param);
int				get_ret(const char *s);
int				print(va_list va, const char *s);
int				print_all(va_list va, const char *s);

#endif
