#include "ft_printf.h"

int     print_negnumwid(t_list *param)
{
		int             x;
		int             count;
		char    c;

		c = ' ';
		count = 0;
		if (param->sign == '-' && param->flag == '0')
				ft_putchar_fd('-', 1);
		if (param->flag == '-' || param->sign != '-')
				return (0);
		if (param->flag == '0')
				c = '0';
		if (param->wid > param->pre && param->wid > param->len - 1)
		{
				if (param->pre > param->len - 1)
						x = param->wid - param->pre;
				if (param->len - 1 > param->pre)
						x = param->wid - param->len - 1;
				while (x > 0)
				{
						ft_putchar_fd(c, 1);
						count++;
						x--;
				}
		}
		if (param->sign == '-' && param->flag != '0')
			ft_putchar_fd('-', 1);
		return (count);
}

int     print_negnum_negwidth(t_list *param)
{
		int             x;
		int             count;

		count = 0;

		if (param->flag != '-' || param->sign != '-')
				return (0);
		if (param->wid > param->pre && param->wid > param->len - 1)
		{
				if (param->pre > param->len - 1)
						x = param->wid - param->pre;
				if (param->len - 1 > param->pre)
						x = param->wid - param->len - 1;
				while (x > 0)
				{
						ft_putchar_fd(' ', 1);
						count++;
						x--;
				}
		}
		return (count);
}
