/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avarnier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/09 15:24:07 by avarnier          #+#    #+#             */
/*   Updated: 2021/01/25 12:02:48 by avarnier         ###   ########.fr       */
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
	int				s;
	int				p;
	int				pre;
	int				len;
	char			flag;
	char			type;
	char			sign;
}				t_list;

int				ft_printf(const char *s, ...);
t_list			*get_param(va_list va, const char *s);
int				print_arg(va_list va, t_list *param);
int				ft_isdigit(int c);
int				ft_atoi(const char *s);
int				ft_putchar_fd(char c, int fd);
int				ft_isalpha(int c);
int				ft_strlen(const char *s);
int				ft_strlen_param(const char *s, t_list *param);
int				ft_putstr_fd(char *s, int fd, int max, int p);
int				ft_putnbr_fd(int n, int fd, t_list *param);
int				ft_puthex_fd(unsigned int n, int fd, char *base, t_list *param);
int				ft_putuns_fd(unsigned int n, int fd, t_list *param);
int				hexlen(unsigned int n, t_list *param);
int				adrlen(unsigned long n, t_list *param);
int				unslen(unsigned int n, t_list *param);
int				nbrlen(int n, t_list *param);
void			get_len(va_list va, t_list *param);
int				print_pre(t_list *param);
int				print_swid(t_list *param);
int				print_snegwidth(t_list *param);
int				print_numwid(t_list *param);
int				print_numnegwidth(t_list *param);
int				print_negnum_negwidth(t_list *param);
int				print_negnumwid(t_list *param);
int				get_ret(const char *s);
int				print(va_list va, const char *s);
int				print_all(va_list va, const char *s);
int				ft_putadr_fd(unsigned long n, int fd,
				char *base, t_list *param);

#endif
